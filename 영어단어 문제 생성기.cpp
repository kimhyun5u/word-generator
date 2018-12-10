#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;

int main() {
	string word[87][2]={
	{"build","to make something from different parts or matrerials"}
	,{"diamond","the hardest gemstone, made of colorless carbon and very valuable"}
	,{"electronics","machines that use electricity such as laptops, televisions, or musical equipment"}
	,{"emerald","a precious green gemstone"}
	,{"expensive watch","a highly-priced small clock worn around the wrist"}
	,{"fame","the state of being well-known and talked about"}
	,{"find","to come across or chance upon something"}
	,{"freeze","to preserve food by keeping it very cold"}
	,{"fur coat","a coat made from the hairy skin of an animal"}
	,{"give","to offer something freely, to make a gift"}
	,{"gold","a precious yellow metal used to make jewelry"}
	,{"handmade jewelry","decorative items, crafted by artisans, that people wear such as rings, bracelets, and necklaces"}
	,{"know","to posses knowledge or understand something"}
	,{"lose","to become unable to find"}
	,{"luxury","great comfort at great expense"}
	,{"pearl necklace","a string of smooth, round, white objects, formed naturally in oysters, that is worn around the neck"}
	,{"precious metals","extremely valuable, costly metals such as gold"}
	,{"precius stones","extremely valuable, costly stones such as diamonds"}
	,{"put","to place something"}
	,{"send","to cause to go or move"}
	,{"silk shirt","the material made by silkworms sewn into a piece of clothing worn on the upper body, usually with sleeves, a collar, and buttons"}
	,{"silver","a white, shinny, metallic element used for making jewelry, knives, forks, spoons, and other objects"}
	,{"badly","the adverb form of bad"}
	,{"beautifully","the adverb form of beautiful"}
	,{"extinct","doesn't exist any more, all dead"}
	,{"fast","the adverb form of fast"}
	,{"habitat","the place where an animal usually lives"}
	,{"hunt","to look for animals and kill them"}
	,{"loudly","the adverb form of loud"}
	,{"predator","an animal that kills other animals"}
	,{"prey","an animal that other animals kill to eat"}
	,{"protect","to keep safe from danger"}
	,{"slowly","the adverb form of slow"}
	,{"species","a kind of animal"}
	,{"well","the adverb form of good"}
	,{"wild","in nature, not controlled by people"}
	,{"bring back","to take something back from where it was taken"}
	,{"bring up","raise someone and care for until fully grown"}
	,{"beyond","on the other side of"}
	,{"despite","even though, in spite of"}
	,{"distant","far away"}
	,{"exchange","a trade, transaction of ideas or objects"}
	,{"figure out","work through a problem of ideas or objects"}
	,{"give up","stop doing or having something"}
	,{"help out","do something good for someone"}
	,{"inspired","to motivate or stimulate"}
	,{"published","to print and distribute to the public"}
	,{"put on","(clothing)to dress"}
	,{"remarkable","somthing that is worthy of attention, extraordinary"}
	,{"search","the action of looking for something"}
	,{"ships","large boats used to navigate large bodies of water"}
	,{"trade","an exchange of objects or materials for finacial gain"}
	,{"turn on","use a switch to turn on an electrical appliance or machine"}
	,{"airline agent","a person who works for an airline at an airport"}
	,{"baggage claim","the part of an airport where travelers get their bags back"}
	,{"boarding pass","a card that shows your seat number on an airplane"}
	,{"carry-on bag","a samll bag that you can take on an airplane with you"}
	,{"departures","the part of an airport where travelers leave"}
	,{"gate","the part of an airport where travelers get on an airplane"}
	,{"itinerary","a plan for where you will go on a trip"}
	,{"passport","an official document that you must show when you enter or leave a country"}
	,{"reservation","a place that is saved for you in a hotel, airplane, train, etc"}
	,{"security check","the part of an airport where officers lok for dangerous things in travelers's bags"}
	,{"sightseeing","the act of visiting special places as a tourist"}
	,{"terminal","a large building at an airport"}
	,{"ticket","a printed piece of paper that says you paid for a place on a trainm airplane, etc"}
	,{"travel agent","a worker who arrangers trips for other people"}
	,{"vaccination","an injection that stops you from getting a particular disease"}
	,{"visa","a stamp or paper that allows you to enter a foreign country"}
	,{"assistant","someone who helps another person do their work; a word used before job titles to indicate slightly lower rank"}
	,{"bored","a feeling of being uninterested in something"}
	,{"boss","the person in charge of others"}
	,{"computer software engineer","someone who designs computer programs"}
	,{"employee","someone who works for a person, business, or government"}
	,{"experience","understanding gained through doing something"}
	,{"health care worker","someone who gives medical care"}
	,{"information technology specialist","an expert in the theory and practice of using computers to store and analyze information"}
	,{"interested","a feeling of curiosity or a desire to know more about a subject"}
	,{"lawyer","a professional who practices law"}
	,{"owner","someone with a business that belongs to him or her"}
	,{"qualificaton","an ability that makes someone suitable to do something"}
	,{"sales representative","someone who sells goods and services, usually outside of a store"}
	,{"satisfying","something that meets your wants or needs"}
	,{"surprised","a feeling of pleasure of shock over an unexpected event"}
	,{"terrifying","casuing a strong fear in someone"}
	,{"training","a process of education, instruction"}
	,{"volunteer","someone who agrees to do something because they want to, not because they have to"}};
	
	srand(time(NULL));
	
	while(true) {
		int n;
		int num;
		int wrongq[87] = {};
		int ccnt = 0;		
		int wcnt = 0;
		string ans;
	
		cout << "몇 문제 푸시겠습니까? ";
		cin >> n;	
		fflush(stdin);
		
		for(int i = 0; i < n; i++) {
			num = rand()%87;
			cout << word[num][1] << " >> ";
			getline(cin,ans);
			
			if(word[num][0] == ans) {
				ccnt++;
			}
			else {
				wrongq[wcnt] = num;
				wcnt++;
			}
		}
		cout << "맞춘 문제 : " << ccnt << "/" << n << endl;
		
		for(int j = 0; j < wcnt; j++) {
			cout << "단어 : " << word[wrongq[j]][0] << " 뜻 : "<< word[wrongq[j]][1] << endl;
		}
		
		cout <<"------------------------------------------------------------------------------" << endl;
	}
		
}

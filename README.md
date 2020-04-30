# Sterilo - Portable UV-C Steriliser
![](doc/EN/img/STERILO%20(2).png)

Sterilo is an open-source, low-cost portable UV-C sterilizer for decontaminating common surface touchpoints in isolation wards and ICUs. It is designed to be DIY-friendly, allowing the possibility of decentralised manufacturing using locally  available materials.

## Background 

Amidst the raging coronavirus pandemic, sterilization of surfaces and common touch points is the key to prevent cross contamination between patients and healthcare workers and to enhance treatment, within isolation wards and Intensive care units (ICU).

Current surface disinfection methods involve spraying Sodium Hypochlorite solution (NaClO) [1] and alcohol wipes, and rinsing after a waiting time of 30 minutes, repeated 3 times a day. These methods are however not effective [2] against many microbes like bacterial spores [3] and in surfaces with high viral loads. Hence, sterilization is preferred over just disinfection. Even high level disinfectants like 2% glutaraldehyde [4] are ineffective unless exposed for 12 hours. Besides, when the healthcare workers directly come in contact (touch) with these infected surfaces while treating patients, they become carriers of infection, leading to a higher risk of COVID-19 transmission [5] within the isolation ward /ICU.

On the other hand, autoclaves are the gold standard in sterilizing smaller instruments used in ICUs and Isolation wards. Each autoclave cycle takes 30 minutes while the drying process takes an hour to remove steam residue on the instruments.  However, a surge in coronavirus patients in a given hospital might lead to exceeding the capacity of autoclaves.  

There are other disinfection methods such as Fumigation, which uses high level disinfectants like Formaldehyde [7] and Glutaraldehyde [8,9]. This method requires 10 hours of exposure time [10] and another 24 hours for the fumes to be ventilated, after fumigation is carried out in a room. However, currently in many of the Indian government hospitals, the operations resume 30 minutes, that too in poorly ventilated rooms after the fumigation which renders healthcare workers exposed to its harmful fumes. Harmful effects [11,12] include mucous membrane irritation, pulmonary symptoms, Epistaxis, allergic contact dermatitis, asthma.

Ultraviolet radiation is an effective sterilization method, commonly found in Biosafety cabinets. The spectrum between 254nm to 265nm usually called UV-C has the maximum germicidal effect.[13] However, this method is currently not used in hospitals due to its harmful effects to human beings on exposure like skin cancer and eye damage [14].

Existing UVC Sterilizer robots [15] and trolley models [16] that are being introduced in the market to sterilize isolation wards require the people in the ward to vacate the ward while it sterilizes, since it places patients at risk of exposure to UVC radiation. But vacating is not logistically feasible, especially in Indian government hospitals. Hence the main need is to effectively sterilize frequently touched surfaces without causing harmful effects to patients and healthcare workers.

<p float="left">
   <img src="https://www.thehindu.com/news/cities/mumbai/u43q2m/article31158060.ece/ALTERNATES/LANDSCAPE_1200/15BMDISINFECTION" width="300" /> 
  <img src="https://images.tribuneindia.com/cms/gall_content/2019/2/2019_2$largeimg03_Sunday_2019_081237005.jpg" width="300" />
  <img src="https://www.pharmawareness.com/wp-content/uploads/2018/03/fogging.jpg" width="300" /> 
</p>

## Need
### Surfaces:
Effective sterilization methods for fixed touch points (surfaces) within isolation wards and ICUs.

### Complement autoclaves
Supplementary sterilization for instruments, in addition to autoclaves, to reduce their overuse.

### Need for reuse of Personal protective equipment
Reuse of N-95 respirators for non-medical staff so that it is available to medical staff working in high viral loads like in isolation wards and ICUs.

# Solution

Sterilo, a portable surface sterilizer that uses UV-C radiation to sterilize common touch points within ICUs and isolation wards, even while the patient is present in its proximity and no special shielding is required. Safety features have been incorporated to avoid accidental exposure to UVC radiation, such that only when it's clamped onto the surface, the UV lamps turn ON.

Sterilo can be used in two configurations:
## A) Clamped onto surfaces
It features suction cups that clamp onto any surface. (See picture below). Once turned ON, the sterilization process runs for 20 minutes and turns off automatically with a beep, so that the user can unclamp it and place it on the next surface.

![](doc/EN/img/ventilator%204.jpg)

![](doc/EN/img/STERILO%20(3)%20(1).png)

## B) Box type
where a lid with an additional UV-C lamp is placed over configuration A. It is designed to hold most small instruments (for compatibility list see below). A removable mesh holds the instruments in place, while two UV-C lamps below ensures all surfaces of an object are completely exposed.

![](doc/EN/img/UV%20with%20things.jpg)

![](doc/EN/img/IMG_6893.jpg)

It is designed to sterilise most of the common touch points within isolation wards and ICUs in hospitals which includes buttons of vital monitors, ventilators, breathing units, pulse oximeters, contact thermometers, N95 masks, other touchpoints such as door handles, plugs, sockets, buttons of control units such as portable X-ray machines, echo machine controls for cardiac patients etc and even surgical equipments such as scissors, shears and tongs. The product is aimed at hospitals, makeshift wards and testing labs.

![](doc/EN/img/123.png)

Helps sterilise the following categories of objects:

- Oximeters: In isolation wards, for severe cases of patients with heart ailments, who also belong to the high risk category of COVID-19, they are monitored with oximeters
- Thermometers: At present, most of the hospitals avoid contactless thermometers because of its inaccuracy, and still rely on normal thermometers which might have more chances of being exposed to a viral load owing to it coming to contact with the COVID-19 patients.
-  N95 Masks: Flow rates drop 1.2 percent every time it is sterilised. However, when there is a shortage of N95 masks, it could be recommended to use the N95 masks after sterilisation. However the life cycle of the N95 masks have to be taken into consideration. (Currently in the hospitals, the doctors go through 6 hour shifts four times a day i.e after every six hour shift, they would need to either reuse the N95 mask or get a new one)
-  Door handles, plugs, sockets (which normally dont fit into an autoclave), surgical equipments such as scissors, clamps, tongs etc
- Buttons of commonly used control units such as portable X-ray machines, breathing unit controls, echo-machine control for cardiac patients and so on.


## Main Features

- DIY- like construction, designed for easy assembly 
- Uses extremely low cost, "off-the-shelf" parts
- Easily replicable using only laser cutting and 3D printing
- Unit mountable onto any surface to sterilize fixed objects
- Unit convertible to an enclosed box: for handheld medical tools
- Innovative design based on adopting UV-C technology in a safe and user-friendly way in a medically accepted standard.
- Shadow elimination- overall illumination by UV-C lamps
- Limit switches avoid UV exposure even in case of mishandling/unintended use cases.
- Durable and Robust Polycarbonate encasing, with sheet metal shielding
- Passive cooling system: avoids fire in case of too much heating
- Miniature Circuit Breaker at power source: to avoid short circuiting, with a 8A fuse next to it, for extra protection
- We invite anyone who is interested to follow this work.


## Experts

Interviews conducted with the following experts during the design process

- Dr. Amar, Field Doctor, Corona Ward, Pune
- Dr. Pravin Deokate, MS Ortho, Sassoon Hospital, Pune
- Dr. Abhiraj Matre, MS Ortho, Sion Hospital, Mumbai
- Dr. Abhinav Gupta, Associate Professor, Jammu University of Internal Medicine
- Dr. Atul Dhakne
- Dr. Mohammed Azhar, Apollo Hospitals, Chennai
- Dr. Sowmya Lakshminarayanan, Post Doctoral Researcher in Microbiology from Padova University, Italy
- Dr. Ram, Manila Hospital
- Dr. Gopalakrishnan.D.R.

## Status of Development

The device is currently under development, a first metal prototype is being realised.

| Date   | Event |
| ----------- | ---------- |
| 23/03/2020  | Start of the project  |
| 05/04/2020  | Research and Need Assessment  |
| 27/03/2020  | Product Development (First iteration)  |
| 30/03/2020  | Concept Development (Second Iteration) |
| 12/04/2020  | First CAD Release Online |
| 13/04/2020  | Prototyping second iteration |
| 18/04/2020  | Expected Date of Completion of the second iteration |

## How to replicate 

For assembling the main body of the device
- 5mm polycarbonate sheet should be cut with a laser cutter
- After cutting the sheet metal as per the drawing, drill holes, and bend it according to the drawings.
- Screw the sheet metal components onto the individual polycarbonate sheets.
- Apply epoxy glue onto the interlocking slots, and then assemble the combined parts from Step 3. onto the base sheet so that they are aligned and fixed firmly.
- Screw the M6 bolts into the 3D printed support for the electric connection, and then fix the UV-C Lamp onto the support.
- Screw this UV-C Support structures two onto the base sheet and one onto the top sheet
- Screw the limit switch in place of the side using 2.5 mm screws.
- Need to bolt the aluminium angles onto the holes provided in the four corners of the sides to house the magnets
- Place the mesh supports onto the given slots in the base sheet, and screw them together with the side sheets respectively
- The steel rod is bent as per the drawing, to make the grill
- The mesh is then cut and held in place within the grill made 
- The grill-mesh subassembly is placed onto the supports inside the box mentioned in Step 9.
- Place ballast/UV-C Lamp drivers in between the lamps and clamp them onto the base
- Screw the handles onto the given holes in the base and top sheets
- Snap fit the rocker switch in the given hole. 
- Screw the two switch guards so as to overlap (one top of the other) and then onto the outer side of the base sheets
- Connect all electronic parts as per the schematic.


# References
References:
[1] Weber, D. J., Barbee, S. L., Sobsey, M. D., & Rutala, W. A. (1999). The effect of blood on the antiviral activity of sodium hypochlorite, a phenolic, and a quaternary ammonium compound. Infection Control & Hospital Epidemiology, 20(12), 821-827.
[2] Koo, D., Bouvier, B., Wesley, M., Courtright, P., & Reingold, A. (1989). Epidemic keratoconjunctivitis in a university medical center ophthalmology clinic; need for re-evaluation of the design and disinfection of instruments. Infection Control & Hospital Epidemiology, 10(12), 547-552
[3, 4] Rutala, W. A., & Weber, D. J. (2008). Guideline for disinfection and sterilization in healthcare facilities, 2008.
[5] Rheinbaben, F. V., Schünemann, S., Gross, T., & Wolff, M. H. (2000). Transmission of viruses via contact in ahousehold setting: experiments using bacteriophage φX174 as a model virus. Journal of Hospital Infection, 46(1), 61-66.
[7] Klein, M. (1963). The inavtivation of viruses by germicides. Proc Annu Meet Chem Spec Manuf Assoc, 116-118.
[8] Gorman, S. P., SCOTT, E. M., & Russell, A. D. (1980). Antimicrobial activity, uses and mechanism of action of glutaraldehyde. Journal of Applied Bacteriology, 48(2), 161-190.
[9] Scott EM, Gorman SP. Glutaraldehyde. In: Block SS, ed. Disinfection, sterilization, and preservation. Philadelphia: Lippincott Williams & Wilkins, 2001:361-81.
[10] Zaidi, M., Angulo, M., & Sifuentes-Osornio, J. (1995). Disinfection and sterilization practices in Mexico. Journal of hospital infection, 31(1), 25-32.
[11] Schnuch, A., Uter, W., Geier, J., Frosch, P. J., & Rustemeyer, T. H. (1998). Contact allergies in healthcare workers. Results from the IVDK. Acta dermato-venereologica, 78(5).
[12] Wiggins, P., McCurdy, S. A., & Zeidenberg, W. (1989). Epistaxis due to glutaraldehyde exposure. Journal of occupational medicine.: official publication of the Industrial Medical Association, 31(10), 854-856.
[13] Russell AD. Ultraviolet radiation. In: Russell AD, Hugo WB, Ayliffe GAJ, eds. Principles and practices of disinfection, preservation and sterilization. Oxford: Blackwell Science, 1999:688-702.
[14] Sensakovic, J. W., & Smith, L. G. (1982). Nosocomial ultraviolet keratoconjunctivitis. Infection Control & Hospital Epidemiology, 3(6), 475-477.
[15] “Autonomous Robots Are Helping Kill Coronavirus in Hospitals” IEEE Spectrum: Technology, Engineering, and Science News, spectrum.ieee.org/automaton/robotics/medical-robots/autonomous-robots-are-helping-kill-coronavirus-in-hospitals
[16] “Flight of the GermFalcon: How a Potential Coronavirus-Killing Airplane Sterilizer Was Born,” IEEE Spectrum: Technology, Engineering, and Science News. [Online]. Available: https://spectrum.ieee.org/tech-talk/aerospace/aviation/germfalcon-coronavirus-airplane-ultraviolet-sterilizer-news.




<!-- # Steps to start documenting the equipment/design you found and chose 
[See this documentation example](https://github.com/CombatCovid/medical-shields-for-3d-printing). You can also download it to see the final result.
1. Download or clone this template to start documenting easily
2. Fill in the source files like STLS, CAD, etc inside

3. Use this one template to create new designs documentation
- Inside docs write down a simple README in language of choice.
- Put in the README.md the reference whre you got the source from to follow up.
- Write down steps to replicate if necessesary as well as guides in sequence.
If this part becomes difficult ask for help here in the [`#how-to-document-designs` channel ]()
 -->

---------------------------------------------------------------------------------------------------------------------------------------

# Readme in Hindi
# स्टेरिलो - पोर्टेबल यूवी-सी स्टेरलाइजर

# पृष्ठभूमि और आवश्यकता

- यह सुनिश्चित करने के लिए कि सीओवीआईडी -19 के उपचार के लिए इस्तेमाल की जाने वाली प्रक्रिया वायरल / बैक्टीरियल संदूषण के मामले में जोखिम मुक्त है, अस्पताल आमतौर पर कीटाणुशोधन / नसबंदी के तरीकों का पालन करते हैं। NaClO और अल्कोहल वाइप्स को शामिल करने वाले कीटाणुशोधन विधियाँ जो अभी भी जीवाणु बीजाणु के विरूद्ध और अधिकांश वायरस के साथ अक्षम हैं। इसके अलावा, अस्पताल के कर्मचारी सीधे उपचार के दौरान इन सतहों के संपर्क में आते हैं, जिससे COVID-19 संचरण का अधिक जोखिम होता है।

- आईसीयू और अलगाव वार्डों में नसबंदी प्रक्रियाओं के लिए, धूमन और आटोक्लेव उपचार सबसे अधिक उपयोग की जाने वाली विधियां हैं। हालांकि, आटोक्लेव के साथ, बहुत सारे उच्च जोखिम वाले संपर्क बिंदु हैं जो बाड़े के मानक आकार में फिट नहीं होते हैं। इसके अलावा उपयोग के बाद पानी की बूंदों का निर्माण भी होता है जिसके लिए अस्पतालों में पुन: उपयोग से पहले सुखाने के उपचार के एक और दौर की आवश्यकता होती है। चूंकि कुल अवधि में लगभग 1 घंटे का समय लगता है, खासकर COVID-19 संकट के दौरान रोगियों की बढ़ी हुई वृद्धि के दौरान, आटोक्लेव अपनी बैच प्रसंस्करण क्षमता को पार कर जाएगा।

- धूमन प्रक्रिया को भी व्यापक समय की आवश्यकता होती है (48 घंटे चिकित्सकीय रूप से स्वीकृत मानक है)। वर्तमान में अधिकांश भारतीय अस्पतालों में, ऑपरेशन 30 मिनट बाद फिर से शुरू होता है, जो उपचार को आंशिक रूप से प्रभावी बनाता है जिससे आईसीयू और अस्पताल के वार्डों में वायरल लोड बढ़ जाता है।

# उपकरणों को बाँझ करने के लिए पर्याप्त आटोक्लेव का अभाव

SARS-CoV-2, COVID-19 पैदा करने वाला वायरस, पर्यावरण में जीवित रहता है, जिसमें विभिन्न सामग्रियों जैसे कि लोहा, कार्डबोर्ड और ऊतक शामिल हैं। यह बताता है कि एक जोखिम है कि श्वासयंत्र की बाहरी सतह और सर्जिकल मास्क का इस्तेमाल किया जाता है जो जल्दी से दूषित हो सकते हैं।
व्यक्तिगत सुरक्षा उपकरणों के पुन: उपयोग की आवश्यकता

पर्याप्त व्यक्तिगत सुरक्षा उपकरणों की कमी के कारण, वे बिना किसी नसबंदी के पुन: उपयोग करने लगे हैं। टीमों 1 और 2 में मेडिकल स्टाफ अभी भी पीपीई के साथ प्रदान नहीं किया गया है और किसी भी अन्य सैनिटरी श्रमिकों की तरह केवल एन 95 मास्क हैं। उनके पास टीमों की तरह उच्च वायरल लोड नहीं हैं (जो गंभीर रोगियों का इलाज करते हैं) और 4 (जो आईसीयू के रोगियों का इलाज करते हैं) टीम 3 और 4 के लिए भी व्यक्तिगत सुरक्षा उपकरणों (पीपीई) की आसन्न कमी है जिसमें मास्क, एप्रन शामिल हैं , पूरे भारत के अस्पतालों में स्वास्थ्य कर्मचारियों के लिए गाउन और आई प्रोटेक्शन गियर। इसके कारण, वे वायरस के संक्रमण के एक उच्च जोखिम का सामना कर रहे हैं, गलती से अन्य रोगियों, अपने स्वयं के परिवारों, और उनके सहयोगियों को ऐसे समय में उजागर कर रहे हैं जब अस्पतालों में महत्वपूर्ण कर्मियों को साइडलाइन पर नहीं रखा जा सकता है। श्वासयंत्र और सर्जिकल मास्क की सतह को दूषित करने से संक्रमण का खतरा बढ़ जाता है जब उचित उपयोग के बिना मास्क या श्वासयंत्र का पुन: उपयोग किया जाता है
चिकित्सा दिशानिर्देश

पुष्टि किए गए मरीजों को एक ही कमरे में 1.2 मीटर (लगभग 4 फीट) से कम नहीं के बिस्तर के साथ व्यवस्थित किया जाता है।
ऑब्जेक्ट सतहों की कीटाणुशोधन: 1000 मिलीग्राम / एल क्लोरीन युक्त कीटाणुनाशक या प्रभावी पाइन के साथ पोंछे के साथ पोंछे; 30 मिनट तक प्रतीक्षा करें और फिर साफ पानी से कुल्ला करें। दिन में 3 बार दोहराया। पहले क्लीनर (कम छुआ हुआ) क्षेत्र कीटाणुरहित होते हैं, उसके बाद दूषित क्षेत्र होते हैं। हर बार एक सतह को मिटा दिया जाता है, उपयोग किए गए पोंछे को एक नए के साथ बदल दिया जाता है

एन 95 मास्क पर यूवी-सी की प्रभावशीलता SARS (SARS-COV) के खिलाफ उपयोग को प्रभावी दिखाया गया 
है l https://www.sciencedirect.com/science/article/pii/S016609340400179X 

यह दर्शाता है कि SOP से जुड़ी पल्स्ड-यूवीसी डिवाइस, सामान्य उच्च-स्पर्श सतहों से सूक्ष्मजीवों को काफी कम कर देती है I https://www.ncbi.nlm.nih.gov/pmc/articles/PMC68010166/

सुदूर UVC: https://www.nature.com/articles/s41598-018-21058-w?fbclid=IwAR3eNTMbA8snIMpCCsYn3LM5TdCtlOPsdIuwRpmmFMI8T_q61MZSMVfT0Q0

 https://www.lesswrong.com/posts/L8KGSDchPpNo48PCM/ubiquitous-far-ultraviolet-light-could-control-the-spread-of

# उपाय

यूवी-सी, हालांकि बैक्टीरिया और वायरस को मारने के लिए एक मानकीकृत प्रौद्योगिकी होने के नाते आमतौर पर मानव के संपर्क में आने के कारण चिकित्सा पद्धति में उपयोग नहीं किया जाता है। डिज़ाइन के माध्यम से उपयोगकर्ताओं की सुरक्षा सुनिश्चित करके, और यूवी-सी तकनीक का लाभ उठाकर, हम चिकित्सा वातावरण में इस तकनीक को अपनाने की अनुमति देते हैं। पोर्टेबल यूवी-सी स्टरलाइज़र ओपन-सोर्स, कम-लागत वाला है और DIY के अनुकूल है, जिससे निर्माता बुनियादी उपकरणों का उपयोग करके अपने समुदायों में स्थानीय रूप से तैनात कर सकते हैं।

यह उत्पाद अस्पतालों में रोगियों और स्वास्थ्य देखभाल कर्मचारियों के लिए संपर्क के अधिकांश बिंदुओं को निष्फल करने के लिए एक मूल्यवान संपत्ति है जिसमें ऑक्सीमीटर, कॉन्टैक्ट थर्मामीटर, एन 95 मास्क, टच प्वाइंट जैसे कि दरवाज़े के हैंडल, प्लग, सॉकेट, पोर्टेबल एक्स जैसे नियंत्रण इकाइयों के बटन शामिल हैं। -रे मशीन, इको मशीन नियंत्रण हृदय रोगियों आदि के लिए और यहां तक कि सर्जिकल उपकरण जैसे कैंची, कैंची, चिमटा आदि।

उपयोग के लिए, ऑब्जेक्ट को पुनः उपयोग के लिए प्रभावी रूप से प्रस्तुत करने के लिए 30 मिनट के एक्सपोज़र के लिए बॉक्स के बाड़े के भीतर जाली के ऊपर रखा जाता है। डिजाइन पूरी सतह को रोशन करता है, जिससे किसी भी छायांकन प्रभाव को होने से रोका जा सकता है। यहां तक कि उन वस्तुओं के लिए जो सीधे यूवी-सी स्टेरलाइजर के बाड़े में फिट नहीं होती हैं, डिजाइन इसे सतह के उचित नसबंदी में मदद करने वाली वस्तु पर रखने की अनुमति देता है।

# निम्नलिखित श्रेणियों की वस्तुओं को बाँझ बनाने में मदद करता है:

- ऑक्सिमेटर्स: आइसोलेशन वार्ड में, हृदय रोगों के रोगियों के गंभीर मामलों के लिए, जो COVID-19 के उच्च जोखिम वाले वर्ग से संबंधित हैं, उनकी निगरानी ऑक्सीमीटर से की जाती है।
- थर्मामीटर: वर्तमान में, अधिकांश अस्पताल अपनी अशुद्धि के कारण संपर्क रहित थर्मामीटरों से बचते हैं, और फिर भी सामान्य थर्मामीटरों पर भरोसा करते हैं, जो COVID-19 रोगियों के संपर्क में आने के कारण वायरल लोड के संपर्क में आने की अधिक संभावना हो सकती है।
- N95 मास्क: प्रवाह दर हर बार निष्फल होने पर 1.2 प्रतिशत कम हो जाती है। हालांकि, जब एन 95 मास्क की कमी होती है, तो नसबंदी के बाद एन 95 मास्क का उपयोग करने की सिफारिश की जा सकती है। हालाँकि N95 मास्क के जीवन चक्र को ध्यान में रखा जाना चाहिए। (वर्तमान में अस्पतालों में, डॉक्टर दिन में चार बार 6 घंटे की शिफ्ट से गुजरते हैं यानी हर छह घंटे की शिफ्ट के बाद, उन्हें या तो N95 मास्क का फिर से उपयोग करना होगा या नया प्राप्त करना होगा)
- दरवाज़े के हैंडल, प्लग, सॉकेट (जो आम तौर पर एक आटोक्लेव में फिट नहीं होते हैं), सर्जिकल उपकरण जैसे कि कैंची, क्लैम्प, टिक आदि।
- आमतौर पर इस्तेमाल की जाने वाली कंट्रोल यूनिट जैसे पोर्टेबल एक्स-रे मशीन, ब्रीदिंग यूनिट कंट्रोल, हृदय रोगियों के लिए इको-मशीन कंट्रोल आदि के बटन।

# मुख्य विशेषताएं

- DIY- जैसे निर्माण, आसान विधानसभा के लिए डिज़ाइन किया गया
- बेहद कम लागत, "ऑफ-द-शेल्फ" भागों का उपयोग करता है
- केवल लेजर कटिंग और 3 डी प्रिंटिंग का उपयोग करके आसानी से नकल करने योग्य
- स्थिर वस्तुओं को निष्फल करने के लिए किसी भी सतह पर स्थित इकाई
- यूनिट एक संलग्न बॉक्स के लिए परिवर्तनीय: हाथ में चिकित्सा उपकरणों के लिए
- चिकित्सकीय रूप से स्वीकृत मानक में यूवी-सी तकनीक को सुरक्षित और उपयोगकर्ता के अनुकूल तरीके से अपनाने के आधार पर अभिनव डिजाइन।
- छाया उन्मूलन- यूवी-सी लैंप द्वारा समग्र रोशनी
- सीमा स्विच गलत उपयोग / अनपेक्षित उपयोग के मामलों में भी यूवी जोखिम से बचते हैं।
- शीट धातु परिरक्षण के साथ टिकाऊ और मजबूत पॉली कार्बोनेट एन्कसिंग
- निष्क्रिय शीतलन प्रणाली: बहुत अधिक हीटिंग के मामले में आग से बचा जाता है
- बिजली के स्रोत पर लघु सर्किट ब्रेकर: अतिरिक्त सुरक्षा के लिए, इसके बगल में 8A फ्यूज के साथ शॉर्ट सर्किटिंग से बचने के लिए
- हम इस काम का पालन करने के लिए किसी को भी आमंत्रित करते हैं।

# विशेषज्ञों

डिजाइन प्रक्रिया के दौरान निम्नलिखित विशेषज्ञों के साथ साक्षात्कार आयोजित किए गए

- डॉ। अमर, फील्ड डॉक्टर, कोरोना वार्ड, पुणे
- डॉ। प्रवीण देओकाटे, एमएस ऑर्थो, ससून हॉस्पिटल, पुणे
- डॉ। अभिराज मैत्रे, एमएस ऑर्थो, सायन अस्पताल, मुंबई
- डॉ। अभिनव गुप्ता, एसोसिएट प्रोफेसर, जम्मू विश्वविद्यालय आंतरिक चिकित्सा
- डॉ। अतुल धकने
- डॉ। मोहम्मद अजहर, अपोलो अस्पताल, चेन्नई
- डॉ। सौम्या लक्ष्मीनारायण, पदोवा विश्वविद्यालय, इटली से माइक्रोबायोलॉजी में पोस्ट डॉक्टरल शोधकर्ता
- डॉ। राम, मनीला अस्पताल

# विकास की स्थिति

डिवाइस वर्तमान में विकास के अधीन है, एक पहले धातु प्रोटोटाइप का एहसास हो रहा है।

| दिनांक  | घटना |
| ----------- | ---------- |
| 23/03/2020  | परियोजना की शुरुआत  |
| 05/04/2020  | अनुसंधान और मूल्यांकन की आवश्यकता  |
| 27/03/2020  | उत्पाद विकास (पहला पुनरावृत्ति)  |
| 30/03/2020  | कॉन्सेप्ट डेवलपमेंट (दूसरा Iteration) |
| 12/04/2020  | पहला सीएडी रिलीज़ ऑनलाइन |
| 13/04/2020  | दूसरा पुनरावृति प्रोटोटाइप |
| 18/04/2020  | दूसरी पुनरावृत्ति की पूर्णता की अपेक्षित तिथि |

# कैसे दोहराएं

डिवाइस के मुख्य शरीर को इकट्ठा करने के लिए

- 5 मिमी पॉली कार्बोनेट शीट को लेजर कटर से काटा जाना चाहिए
- ड्राइंग ड्राइंग, ड्रिल छेद के अनुसार शीट धातु को काटने के बाद, और इसे ड्राइंग के अनुसार मोड़ दें।
- व्यक्तिगत पॉली कार्बोनेट शीट्स पर शीट मेटल घटकों को पेंच करें।
- इंटरलॉकिंग स्लॉट पर एपॉक्सी गोंद लागू करें, और फिर चरण 3 से संयुक्त भागों को इकट्ठा करें। बेस शीट पर ताकि वे गठबंधन और मजबूती से तय हो।
- इलेक्ट्रिक कनेक्शन के लिए 3 डी प्रिंटेड सपोर्ट में M6 बोल्ट को स्क्रू करें, और फिर यूवी-सी लैंप को सपोर्ट पर ठीक करें।
- इस यूवी-सी सपोर्ट संरचनाओं को आधार-शीट पर दो और शीर्ष-शीट पर एक स्क्रू करें
- 2.5 मिमी शिकंजा का उपयोग करके पक्ष के स्थान पर सीमा स्विच को पेंच करें।
- मैग्नेट को घर करने के लिए पक्षों के चार कोनों में प्रदान किए गए छेदों पर एल्यूमीनियम के कोणों को बोल्ट करने की आवश्यकता है
- बेस शीट में दिए गए स्लॉट्स पर मेष का समर्थन करें, और उन्हें क्रमशः साइड शीट के साथ स्क्रू करें
- स्टील रॉड को ग्रिल बनाने के लिए, ड्राइंग के अनुसार मुड़ा हुआ है
- फिर जाली को बनाया गया ग्रिल के भीतर काट दिया जाता है
- ग्रिल-मेश सबअस्पेशन को स्टेप 9 में बताए गए बॉक्स के अंदर सपोर्ट पर रखा गया है।
- लैंप के बीच गिट्टी / यूवी-सी लैंप ड्राइवरों को रखें और उन्हें आधार पर जकड़ें
- आधार और शीर्ष शीट्स में दिए गए छेद पर हैंडल को स्क्रू करें
- स्नैप दिए गए छेद में घुमाव स्विच को फिट करता है।
- दो स्विच गार्ड को पेंच करें ताकि ओवरलैप (दूसरे के एक शीर्ष) और फिर बेस शीट के बाहरी तरफ
- योजनाबद्ध तरीके से सभी इलेक्ट्रॉनिक भागों को कनेक्ट करें l

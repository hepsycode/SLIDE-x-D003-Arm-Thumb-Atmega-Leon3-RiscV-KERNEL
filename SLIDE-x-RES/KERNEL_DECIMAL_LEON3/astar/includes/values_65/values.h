#ifndef VALUES
#define VALUES
	enum{size = 18};
	enum{goal = 254};
	double a[size][size] = {{-2250315271913585312, -6732393368850360636, -566992993975517811, 5253291635237216155, 1463643583884910281, 5124804386754519267, 4950870748901039408, 1949018550430384004, -2414800506107948985, 5423864047610858266, 5483322622244451932, 3431157582392022301, 7336769595522927857, -1179487006401243670, -1725066280282160051, 6540477916102030933, -5337514769367304560, -8278516506562363130},{7706229386741942542, 7897878627069546090, -8422406342025454412, -7065378676808599266, -8776288807591270574, 3733220260441208792, -2121112271112830668, 7326048598341541035, 8710581326530905050, -8007351854507726329, 5508265266189674798, 8580924296753030989, -3431525185181151527, 1068050431439211695, -8769917802524709182, 5753820457268010785, -322716867688434526, 3714993252940716137},{-4691709244463228794, 8947632817279552881, 6934307313835292382, 6332498100425481075, 5274091017143566378, -9089644530211906281, -3012680395543565766, 857105852155505873, -682561573147483994, 3587280308777661879, 2303333626722888305, 8481626940539559900, -3598990367684854832, 2221175130394733843, -1578600168328584674, 6351886806901401088, 2800086927725741538, 546116621675727868},{7394838439865505491, 6332622179812264209, 8718912768913678034, -1451954928539448816, -7286898063195037777, 5038950495553308645, -539982792978125202, 1766775322338930957, 5854182263667054316, 5455120561628935403, -8277784374343815573, -6397472134746529895, -4416423003182680191, 617800810283969893, -5865513520838228263, -7994754820957925601, 5600174049327393274, 7713109966622941422},{4969687053901614562, 2399421387828350861, -7132755450353413956, -7417963889404564030, -7727584550128847314, -7109654936294695345, 3260616780078819946, -6347757375460325739, 2513105911592313652, 8277742663305749784, -5789349344372559326, -2084067915105592610, 1682655988621788167, -5300639123763063721, 1702236680178127449, -457421181753737699, 2511927827420131488, -8094424473809131626},{-8447419042353009325, 3722932545581060257, -8386759151235726258, 468864392090735579, -3462408559165861578, 4781938289421762210, -3539591615055117261, -5463816562470659029, 8898761661466855982, 1344951785446521863, -5317205387002654691, -3760969676920806551, 1859687847438369164, -2548023382590713465, -5926407435551324404, 4588796424658054390, 8902697152241184427, 2265607221664968572},{-8057210296185312266, -4525311988468301023, 4158062504937784782, -7206814731756397606, -2284294765271871172, 244435702963566910, -4202575846251663120, 9175654429052989710, 6831390916960317052, 6614108963416490397, -2451192214921898481, -8603844211789927922, 7739424540786947115, -6101662923068892757, -5408659779177241946, 5770983478668523735, 4097376920199652683, -7511580345453643694},{1170444400766145834, -4079505970391811790, -1349850508911113457, 8741485872493384486, -7885967629386035400, 5186429682651491473, 7617552382084330575, 5632399082028269589, -5676774264492776189, -5448728304065930769, 5147392777540564192, -972363705918814645, -1624982250498502850, 4509772017431290210, -4919517486116160258, 430952225388803213, 153800256709068129, -5219537345999646607},{-3242709990291847672, -659157804158328496, -5561635651308017892, -4752665138077247611, -609925701376999486, 561487542641517815, -3319556596095386416, 3076013983232590500, -1346760695013149924, 7517397380132794191, -7781749587488594938, -7714726564105968508, -4190024691636323093, -1291466700274736450, 2453339692367890007, -7211834054402279252, 9090539329885143873, -5974190602972839348},{-7485942757721558693, -359745353832208590, -4225916058640639640, 7660311105121111481, 9130774340313436169, 7849271777945137444, 2852987280466791871, -5933727821124906024, -8343136486258558381, -6493201008968585247, 2338478120660643420, 8409861371691911745, -9155537115455142674, -844913406693212290, -2822767893211194202, -1276779805160577098, 7148227584534386673, -7073056803749333159},{2375069301456757484, 5206467019733349206, 2444780852009341724, -988608485299939959, -7813887954617272218, -7826281128477385232, -1968181494643927508, 6545298777416336581, 2185596187831901644, 8094540668807334259, -419042180854905913, -1007275618120694013, 6400404294364127881, 7283448911527645385, 6433057001860670429, -1413463116327540071, 6227406294061502016, 8005698639146262003},{-8092181967502144739, 8181191832381429870, 7458903263413555011, -4863158737534306821, -9043877581216075366, -8555443754684553703, -725353482060246962, -4356127656319600840, -6680444645277491073, 6434589887290643976, -1532603022929973189, -6600683448807211218, 367576430261123002, 6203183916255189667, -1238136591225912898, -5617793972919927362, -8254288008671621891, -1367667482522784298},{8287826828283669338, -3352357868423528550, -8272015702961035536, -4588505046155444422, 3904214019238348473, 5098436227495816277, 4282672140254879493, -3040308242230514138, -993776598280843084, 252510932509526519, -8628429417862275543, 9004425174150143382, 8534719139462824973, -5781384042291539196, -1743276465600028557, 381151549684747113, -6700528293346673798, -7294264022954642526},{-2197296334522951841, 3589870383603364215, 1094309461846503911, -4515316060474152965, 2641015730254263255, -1731953419732536035, -662065960041487049, 8862556087704015476, 4012759561086437761, -838406374144816919, -4484417435324402212, 8299299742657848030, 4721309856768528698, -4568660052075473993, -5658619150552547724, 67910990285767632, -1792847465080757890, 5265881309127706346},{-1398910230622979085, 2062411168586640230, -2304220405522750706, -7382260080822644564, -7958024279498245492, -3259956720152431176, -627988378424687837, -7559053118348846772, -6909937602911696359, 8491229277469718378, 4367587976685128557, 3480496939177849085, -8799174343783390768, -6349390954358645346, 1113386537758628538, 2279529988467377777, -5150340111216963548, -821862916145738798},{-2675090582169779846, -7486775740856897516, -6360140622587049582, -9050846089954391126, 4369938038470575191, 2348799089188371366, 6762752371885700905, 2606524606732144615, -3447126019323193838, 9204742521913992477, 4046572104820941006, -5666241086929842567, 5480634769967517691, -3422556082779431300, 319006407094322060, -1815025498715416539, 5012480644555029726, 5373876785095871235},{-5029391304135779374, 9216224230018103785, 2480991734561507765, 5899045199468512962, 1456886200911912324, 5840742572231280372, 968483593122676745, 123056061098585379, 3752989838384561183, 6978901276533149415, 9104850464504208961, -7737298228562710315, -7224950224307373907, 434581153713798350, -3502116149848449716, -4968935290818838193, 795680550616573991, -2997031020246155804},{2375739542299157585, -5005074727001891131, -7652598852982062441, 7399022440898659146, -7328190143267837322, 8804672375369387662, -25201721393119785, -1773920059419088833, 3942709900141611862, 8182387550956902545, -7794163290375761660, 4033356997602628118, 6904411511222479401, 5660764159041849970, 5633732802264219050, 7884686169079888821, -1069494509349253028, 7133032239041811636}};
#endif
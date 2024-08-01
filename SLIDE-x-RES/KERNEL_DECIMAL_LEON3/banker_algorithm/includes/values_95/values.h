#ifndef VALUES
#define VALUES
	enum{size = 12};
	double available[size] = {6827632120788468039, 3885002774293913478, 865527702948219766, 5741001915395701532, 1115427912597216308, 4107412190767666434, 437181480358472004, 6430453222577593010, 8298430505025332350, 6654747968283522921, 3745588540263679911, 5643748887395597972};
	double allocated[size][size] = {{8586128327085493436, 6854326939232906144, 2060064966105459757, 5185507627659853862, 7515724411443946706, 8782765610815384210, 1804455197674089430, 8869226753419717611, 730306966880032535, 1994249714391714273, 2325983509595098803, 7589236683974234603},{3216038612442168843, 8422491948750638622, 9157059548893953596, 4076271910145075296, 2855081685384564886, 2957739738996422698, 2466325589741562822, 4170035939662428578, 6657642467163174075, 8976713567697416039, 5372369110586204458, 6573514735892248214},{8217076664695495662, 3998619087287451958, 3429286406534989164, 3629107158791510014, 1384069460028614148, 7596785305640035683, 6979312585937599373, 1473577089280461170, 640829481039951686, 5737807863093615339, 439860778026697349, 5673891128338791733},{341634364680643966, 5785616436067887216, 7598170832958449540, 250593381771984223, 5367940015847431789, 8910663864864916720, 8468292300118886424, 4516899021296806867, 5063148825951388499, 4429237261255738860, 5646168142941940403, 3144800674011334008},{8861170243847960978, 4009040592989562334, 5334488768990053976, 1064080062867821449, 8316019145658342218, 993698523168505042, 2070377487494343107, 4583682269524693323, 4397628723271760697, 5986769548736224892, 5474606456485331732, 1025373561925534087},{6512907323237900678, 222538927638017548, 2915229878649618976, 9129544462979675439, 137452553295943319, 5300890344637564122, 2892627991553678020, 591057724364026314, 16369631919262368, 2780469048083795094, 9036014864309379966, 5277079873421773614},{7618487286988832932, 1460894587750634384, 4635468863014671273, 8928730510088488780, 8180308573426886562, 6130666912796533835, 5547509681039935646, 4688077691095587674, 5729849849459773322, 6723049311171845336, 8042766629628100861, 5047520309315995278},{2328513027960660053, 8544893300469482369, 8947890505034632584, 5559074923989138859, 2486393557074118740, 8508443219061716364, 3840702446374793960, 4959469259045270609, 4577546904966400312, 2938908247661175634, 8987266297251583108, 5519259225792313778},{8192081894751729584, 4928704805128860004, 2728897724730173248, 25757494499674560, 1740967226491678259, 5147169169328523001, 3211065611169146264, 3075697948291446405, 1605601335794151874, 4244009079823284992, 2263084581181436732, 1712467594837871201},{2103116215600239169, 68742258094254244, 3346966374287415390, 2398995664259177478, 5025045679983553107, 8735460707388918265, 6739526876145526749, 2478057476856520557, 3698669534643265350, 4439971653372796460, 2153085281655804667, 6777211120558010917},{4861986511137837573, 4145324285916241417, 451988933603968767, 4787645088662772419, 5538021867912560353, 5476547710281030152, 2561614255372013231, 2413869563895612336, 8151339758504834646, 2904043879213822519, 464932704439904393, 2810675365230356505},{5649285052957329126, 4647785090278160189, 3949668618746682359, 9137107956894298964, 107949543478974008, 6943921595660740058, 9007852895984353322, 5012174540552934821, 1349943912158225887, 1379274350391087661, 6283588445918606451, 7929296546637003622}};
	double max[size][size] = {{7515087568078511945, 1330477037582622444, 4976687938491907385, 4786969776574460208, 7483436817340099137, 4825688402273717347, 3257290344497012383, 4737335096817924054, 7339037033649730722, 2952330565763110471, 9030115642494652485, 3287511481311675850},{6012906805124151008, 6667262099319854738, 2159058538221733848, 7699406706900132406, 5074643355647325040, 9049291374279207302, 3947580853287612082, 8518317904421093687, 7339978030934443290, 7834083793223868602, 3149852050961800462, 159341697386942631},{3673584920825103378, 1911810575688599714, 6876191027921855417, 6211165423833129731, 1908138263488679159, 7443228615402059148, 3673346985166892979, 6188230611162900368, 8673346177272813615, 7161582788703042791, 2230606797825840983, 2889329517306218197},{8937195740506915478, 5915319691195617140, 2958186899490244998, 5972702279364560090, 6693943976466978766, 2805736630750264190, 8803855592224610586, 5275272802884097494, 7294079187467170434, 3310383551942968060, 921038127556496716, 2218110795051415132},{5839851753494687563, 1156277976298300186, 8179135369758636142, 4990140911901943664, 8462934770882815747, 322781915791831736, 4562739391469112688, 250003481983322296, 3437929050036021708, 4902039490701124608, 7947978851511184491, 3221531577303408915},{4278342387218279303, 869820693682218891, 6584645770398132849, 7275929963557757834, 2865045124483072816, 5484528083674185970, 3910582290925378950, 969559191946027633, 4134901353763705213, 1380398123337242139, 3543463150190764797, 2455331019351795791},{4058093957031333034, 8154753181279439564, 5882608945285731890, 1548914635995554632, 4589589725701742417, 7867164693017101661, 5727239883264922254, 3099432132797454786, 7687613777345503148, 6638604841283415687, 8633116567648167680, 782257688959651880},{2176675865960804290, 8509335995787125611, 6487370377768729992, 7162161617804471714, 8223733957700477038, 7513380750867682843, 7830790259415519356, 5066539100709029839, 2516822762158876346, 4115901869469010189, 3923220161011917561, 6225963593731719124},{1372102003998485100, 8834679827281478627, 153692057535354400, 1899916940528529481, 6189111153766972886, 2858480802558774003, 8485887282388125846, 3198051768381044255, 7935694293471333351, 5436366541881881755, 2922488582636012690, 2472182904276775511},{2306447625722544234, 8964191706674411168, 8752631135067806100, 7040112180855919595, 1417851036736276977, 8385403035072429513, 6780410647670589880, 5094884427491348602, 945924123437711809, 9039569441662068193, 3630579771869851045, 7636217190836798968},{3902801106511055934, 3304312884164183267, 1656051945438682277, 8618914102746544031, 1801724003898385201, 9130867303737596675, 9170675941005385304, 4680744061810251980, 3455795744420631832, 2040210820048483155, 5622203099852655937, 2290429425560497917},{2338801987707972333, 5079484250196212652, 8986488596017480405, 5601876954747124804, 8451645098461423536, 5919680848305540178, 5625396745162683956, 5698662606810670404, 7946140327758473059, 1105940940643260870, 799167535639208271, 1681554876025095074}};
#endif
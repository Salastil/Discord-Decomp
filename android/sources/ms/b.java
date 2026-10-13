package ms;

import java.util.HashMap;
import java.util.Locale;
import ls.a0;
import ls.e0;

/* loaded from: classes3.dex */
public final class b implements a0 {
    public static final HashMap a;

    /* renamed from: b, reason: collision with root package name */
    public static final a f14588b;

    /* renamed from: c, reason: collision with root package name */
    public static final HashMap f14589c;

    /* renamed from: d, reason: collision with root package name */
    public static final a f14590d;

    static {
        HashMap hashMap = new HashMap(140);
        a = hashMap;
        f14588b = new a();
        HashMap hashMap2 = new HashMap();
        b("bm bo dz id ig ii in ja jbo jv jw kde kea km ko lkt", hashMap2);
        b("lo ms my nqo root sah ses sg th to vi wo yo zh", hashMap2);
        b("pt_PT", hashMap2);
        b("am as bn fa gu hi kn zu", hashMap2);
        b("ff fr hy kab pt", hashMap2);
        b("si", hashMap2);
        b("ak bh guw ln mg nso pa ti wa", hashMap2);
        b("tzm", hashMap2);
        b("is", hashMap2);
        b("mk", hashMap2);
        b("ceb fil tl", hashMap2);
        b("lv prg", hashMap2);
        b("lag ksh", hashMap2);
        b("iu naq se sma smi smj smn sms", hashMap2);
        b("shi", hashMap2);
        b("mo ro", hashMap2);
        b("bs hr sh sr", hashMap2);
        b("gd", hashMap2);
        b("sl", hashMap2);
        b("he iw", hashMap2);
        b("cs sk", hashMap2);
        b("pl", hashMap2);
        b("be", hashMap2);
        b("lt", hashMap2);
        b("mt", hashMap2);
        b("ru uk", hashMap2);
        b("br", hashMap2);
        b("ga", hashMap2);
        b("gv", hashMap2);
        b("ar", hashMap2);
        b("cy", hashMap2);
        b("dsb hsb", hashMap2);
        b("kw", hashMap2);
        hashMap.putAll(hashMap2);
        HashMap hashMap3 = new HashMap(140);
        f14589c = hashMap3;
        f14590d = new a();
        HashMap hashMap4 = new HashMap();
        c("sv", hashMap4);
        c("fil fr ga hy lo mo ms ro tl vi", hashMap4);
        c("hu", hashMap4);
        c("ne", hashMap4);
        c("kk", hashMap4);
        c("it sc scn", hashMap4);
        c("ka", hashMap4);
        c("sq", hashMap4);
        c("en", hashMap4);
        c("mr", hashMap4);
        c("ca", hashMap4);
        c("mk", hashMap4);
        c("az", hashMap4);
        c("gu hi", hashMap4);
        c("as bn", hashMap4);
        c("cy", hashMap4);
        c("be", hashMap4);
        c("uk", hashMap4);
        c("tk", hashMap4);
        c("or", hashMap4);
        c("gd", hashMap4);
        c("kw", hashMap4);
        hashMap3.putAll(hashMap4);
    }

    public static void b(String str, HashMap hashMap) {
        for (String str2 : str.split(" ")) {
            hashMap.put(str2, new a());
        }
    }

    public static void c(String str, HashMap hashMap) {
        for (String str2 : str.split(" ")) {
            hashMap.put(str2, new a());
        }
    }

    @Override // ls.a0
    public final e0 a(Locale locale) {
        HashMap hashMap;
        a aVar;
        e0 e0Var;
        int b10 = f0.e.b(1);
        if (b10 == 0) {
            hashMap = a;
            aVar = f14588b;
        } else {
            if (b10 != 1) {
                throw new UnsupportedOperationException("CARDINALS");
            }
            hashMap = f14589c;
            aVar = f14590d;
        }
        String country = locale.getCountry();
        if (country.isEmpty()) {
            e0Var = null;
        } else {
            e0Var = (e0) hashMap.get(locale.getLanguage() + '_' + country);
        }
        if (e0Var == null) {
            e0Var = (e0) hashMap.get(locale.getLanguage());
        }
        return e0Var == null ? aVar : e0Var;
    }
}

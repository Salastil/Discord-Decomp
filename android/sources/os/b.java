package os;

import is.c;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import net.time4j.tz.p;

/* loaded from: classes3.dex */
public final class b implements p {
    static {
        new ConcurrentHashMap();
        HashSet hashSet = new HashSet();
        hashSet.add("Z");
        hashSet.add("GMT");
        hashSet.add("GMT0");
        hashSet.add("Greenwich");
        hashSet.add("UCT");
        hashSet.add("UTC");
        hashSet.add("UTC0");
        hashSet.add("Universal");
        hashSet.add("Zulu");
        Collections.unmodifiableSet(hashSet);
        HashMap hashMap = new HashMap();
        c cVar = c.f12272b;
        InputStream b10 = cVar.b(cVar.c("olson", "data/zone1970.tab", b.class));
        if (b10 == null) {
            b10 = b.class.getClassLoader().getResourceAsStream("data/zone1970.tab");
        }
        try {
            if (b10 != null) {
                try {
                    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(b10, "UTF-8"));
                    while (true) {
                        String readLine = bufferedReader.readLine();
                        if (readLine == null) {
                            try {
                                break;
                            } catch (IOException e9) {
                            }
                        } else if (!readLine.startsWith("#") && !readLine.isEmpty()) {
                            String[] split = readLine.split("\t");
                            if (split.length >= 3) {
                                for (String str : split[0].split(",")) {
                                    a(str, split[2], hashMap);
                                }
                            }
                        }
                    }
                } catch (UnsupportedEncodingException e10) {
                    throw new AssertionError(e10);
                } catch (IOException e11) {
                    throw new IllegalStateException(e11);
                }
            } else {
                System.err.println("Warning: File \"data/zone1970.tab\" not found.");
            }
            Collections.unmodifiableMap(hashMap);
            HashMap hashMap2 = new HashMap();
            hashMap2.put("CL", "America/Santiago");
            hashMap2.put("CN", "Asia/Shanghai");
            hashMap2.put("DE", "Europe/Berlin");
            hashMap2.put("EC", "America/Guayaquil");
            hashMap2.put("ES", "Europe/Madrid");
            hashMap2.put("MH", "Pacific/Majuro");
            hashMap2.put("MY", "Asia/Kuala_Lumpur");
            hashMap2.put("NZ", "Pacific/Auckland");
            hashMap2.put("PT", "Europe/Lisbon");
            hashMap2.put("UA", "Europe/Kiev");
            hashMap2.put("UZ", "Asia/Tashkent");
            Collections.unmodifiableMap(hashMap2);
        } finally {
            try {
                b10.close();
            } catch (IOException e92) {
                e92.printStackTrace(System.err);
            }
        }
    }

    public static void a(String str, String str2, HashMap hashMap) {
        Set set = (Set) hashMap.get(str);
        if (set == null) {
            set = new LinkedHashSet();
            hashMap.put(str, set);
        }
        set.add(str2);
    }
}

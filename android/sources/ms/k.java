package ms;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.net.URI;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import ls.s0;
import net.time4j.n1;

/* loaded from: classes3.dex */
public final class k implements s0 {
    public final String a;

    public k() {
        String substring;
        n1 n1Var;
        HashMap hashMap;
        is.c cVar = is.c.f12272b;
        URI c6 = cVar.c("i18n", "data/week.data", k.class);
        InputStream b10 = cVar.b(c6);
        if (b10 == null) {
            try {
                b10 = is.c.a(k.class, "data/week.data");
            } catch (IOException unused) {
            }
        }
        if (b10 == null) {
            this.a = "@STATIC";
            Set set = Collections.EMPTY_SET;
            Map map = Collections.EMPTY_MAP;
            System.err.println("Warning: File \"data/week.data\" not found.");
            return;
        }
        this.a = "@" + c6;
        HashSet hashSet = new HashSet();
        HashMap hashMap2 = new HashMap();
        HashMap hashMap3 = new HashMap();
        HashMap hashMap4 = new HashMap();
        try {
            try {
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(b10, "US-ASCII"));
                while (true) {
                    String readLine = bufferedReader.readLine();
                    if (readLine == null) {
                        Collections.unmodifiableSet(hashSet);
                        Collections.unmodifiableMap(hashMap2);
                        Collections.unmodifiableMap(hashMap3);
                        Collections.unmodifiableMap(hashMap4);
                        try {
                            b10.close();
                            return;
                        } catch (IOException e9) {
                            e9.printStackTrace(System.err);
                            return;
                        }
                    }
                    if (!readLine.startsWith("#")) {
                        int indexOf = readLine.indexOf(61);
                        int i5 = 0;
                        String trim = readLine.substring(0, indexOf).trim();
                        String[] split = readLine.substring(indexOf + 1).split(" ");
                        if (trim.equals("minDays-4")) {
                            int length = split.length;
                            while (i5 < length) {
                                String upperCase = split[i5].trim().toUpperCase(Locale.US);
                                if (!upperCase.isEmpty()) {
                                    hashSet.add(upperCase);
                                }
                                i5++;
                            }
                        } else {
                            if (trim.startsWith("start-")) {
                                substring = trim.substring(6);
                                n1Var = n1.f15294x;
                                hashMap = hashMap3;
                            } else if (trim.startsWith("end-")) {
                                substring = trim.substring(4);
                                n1Var = n1.f15295y;
                                hashMap = hashMap4;
                            } else {
                                if (!trim.startsWith("first-")) {
                                    throw new IllegalStateException("Unexpected format: " + this.a);
                                }
                                substring = trim.substring(6);
                                n1Var = n1.f15289d;
                                hashMap = hashMap2;
                            }
                            if (substring.equals("sun")) {
                                n1Var = n1.f15295y;
                            } else if (substring.equals("sat")) {
                                n1Var = n1.f15294x;
                            } else if (substring.equals("fri")) {
                                n1Var = n1.f15293w;
                            } else if (substring.equals("thu")) {
                                n1Var = n1.f15292v;
                            } else if (substring.equals("wed")) {
                                n1Var = n1.f15291i;
                            } else if (substring.equals("tue")) {
                                n1Var = n1.f15290e;
                            } else if (substring.equals("mon")) {
                                n1Var = n1.f15289d;
                            }
                            int length2 = split.length;
                            while (i5 < length2) {
                                String upperCase2 = split[i5].trim().toUpperCase(Locale.US);
                                if (!upperCase2.isEmpty()) {
                                    hashMap.put(upperCase2, n1Var);
                                }
                                i5++;
                            }
                        }
                    }
                }
            } catch (Throwable th2) {
                try {
                    b10.close();
                } catch (IOException e10) {
                    e10.printStackTrace(System.err);
                }
                throw th2;
            }
        } catch (UnsupportedEncodingException e11) {
            throw new AssertionError(e11);
        } catch (Exception e12) {
            throw new IllegalStateException("Unexpected format: " + this.a, e12);
        }
    }

    public final String toString() {
        return k.class.getName() + this.a;
    }
}

package kt;

import android.os.Trace;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;
import s4.h;

/* loaded from: classes.dex */
public final class g {
    public final HashMap a;

    public g(HashMap hashMap) {
        this.a = hashMap;
    }

    public static int[] a(String str) {
        try {
            if (str.isEmpty()) {
                throw new IllegalArgumentException("Version string is empty");
            }
            StringTokenizer stringTokenizer = new StringTokenizer(str, ".");
            int countTokens = stringTokenizer.countTokens();
            int[] iArr = new int[countTokens];
            for (int i5 = 0; i5 < countTokens; i5++) {
                iArr[i5] = Integer.parseInt(stringTokenizer.nextToken());
            }
            return iArr;
        } catch (RuntimeException e9) {
            throw new IllegalArgumentException(h.f("Unable to parse HTTP flags version string: `", str, "`"), e9);
        }
    }

    public static g c(e eVar, String str, boolean z5) {
        ht.a.c("Cronet ResolvedFlags#resolve");
        try {
            a(str);
            HashMap hashMap = new HashMap();
            for (Map.Entry entry : Collections.unmodifiableMap(eVar.f13694e).entrySet()) {
                try {
                    f.a((b) entry.getValue(), z5);
                } catch (RuntimeException e9) {
                    throw new IllegalArgumentException("Unable to resolve HTTP flag `" + ((String) entry.getKey()) + "`", e9);
                }
            }
            g gVar = new g(hashMap);
            Trace.endSection();
            return gVar;
        } catch (Throwable th2) {
            try {
                Trace.endSection();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public void b(HashMap hashMap) {
        for (Map.Entry entry : hashMap.entrySet()) {
            String str = (String) entry.getKey();
            Object value = entry.getValue();
            HashMap hashMap2 = this.a;
            if (value == null) {
                hashMap2.put(str, null);
            } else {
                Class<?> cls = value.getClass();
                if (cls == Boolean.class || cls == Byte.class || cls == Integer.class || cls == Long.class || cls == Float.class || cls == Double.class || cls == String.class || cls == Boolean[].class || cls == Byte[].class || cls == Integer[].class || cls == Long[].class || cls == Float[].class || cls == Double[].class || cls == String[].class) {
                    hashMap2.put(str, value);
                } else {
                    int i5 = 0;
                    if (cls == boolean[].class) {
                        boolean[] zArr = (boolean[]) value;
                        String str2 = v3.f.f19201b;
                        Boolean[] boolArr = new Boolean[zArr.length];
                        while (i5 < zArr.length) {
                            boolArr[i5] = Boolean.valueOf(zArr[i5]);
                            i5++;
                        }
                        hashMap2.put(str, boolArr);
                    } else if (cls == byte[].class) {
                        byte[] bArr = (byte[]) value;
                        String str3 = v3.f.f19201b;
                        Byte[] bArr2 = new Byte[bArr.length];
                        while (i5 < bArr.length) {
                            bArr2[i5] = Byte.valueOf(bArr[i5]);
                            i5++;
                        }
                        hashMap2.put(str, bArr2);
                    } else if (cls == int[].class) {
                        int[] iArr = (int[]) value;
                        String str4 = v3.f.f19201b;
                        Integer[] numArr = new Integer[iArr.length];
                        while (i5 < iArr.length) {
                            numArr[i5] = Integer.valueOf(iArr[i5]);
                            i5++;
                        }
                        hashMap2.put(str, numArr);
                    } else if (cls == long[].class) {
                        long[] jArr = (long[]) value;
                        String str5 = v3.f.f19201b;
                        Long[] lArr = new Long[jArr.length];
                        while (i5 < jArr.length) {
                            lArr[i5] = Long.valueOf(jArr[i5]);
                            i5++;
                        }
                        hashMap2.put(str, lArr);
                    } else if (cls == float[].class) {
                        float[] fArr = (float[]) value;
                        String str6 = v3.f.f19201b;
                        Float[] fArr2 = new Float[fArr.length];
                        while (i5 < fArr.length) {
                            fArr2[i5] = Float.valueOf(fArr[i5]);
                            i5++;
                        }
                        hashMap2.put(str, fArr2);
                    } else {
                        if (cls != double[].class) {
                            throw new IllegalArgumentException("Key " + str + " has invalid type " + cls);
                        }
                        double[] dArr = (double[]) value;
                        String str7 = v3.f.f19201b;
                        Double[] dArr2 = new Double[dArr.length];
                        while (i5 < dArr.length) {
                            dArr2[i5] = Double.valueOf(dArr[i5]);
                            i5++;
                        }
                        hashMap2.put(str, dArr2);
                    }
                }
            }
        }
    }

    public g() {
        this.a = new HashMap();
    }
}

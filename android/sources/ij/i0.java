package ij;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

/* loaded from: classes3.dex */
public abstract class i0 {
    public static final char[] a;

    static {
        char[] cArr = new char[80];
        a = cArr;
        Arrays.fill(cArr, ' ');
    }

    public static void a(StringBuilder sb2, int i5) {
        while (i5 > 0) {
            int i6 = 80;
            if (i5 <= 80) {
                i6 = i5;
            }
            sb2.append(a, 0, i6);
            i5 -= i6;
        }
    }

    public static void b(StringBuilder sb2, int i5, String str, Object obj) {
        if (obj instanceof List) {
            Iterator it = ((List) obj).iterator();
            while (it.hasNext()) {
                b(sb2, i5, str, it.next());
            }
            return;
        }
        if (obj instanceof Map) {
            Iterator it2 = ((Map) obj).entrySet().iterator();
            while (it2.hasNext()) {
                b(sb2, i5, str, (Map.Entry) it2.next());
            }
            return;
        }
        sb2.append('\n');
        a(sb2, i5);
        if (!str.isEmpty()) {
            StringBuilder sb3 = new StringBuilder();
            sb3.append(Character.toLowerCase(str.charAt(0)));
            for (int i6 = 1; i6 < str.length(); i6++) {
                char charAt = str.charAt(i6);
                if (Character.isUpperCase(charAt)) {
                    sb3.append("_");
                }
                sb3.append(Character.toLowerCase(charAt));
            }
            str = sb3.toString();
        }
        sb2.append(str);
        if (obj instanceof String) {
            sb2.append(": \"");
            g gVar = g.f10858i;
            sb2.append(d9.a.l(new g(((String) obj).getBytes(t.a))));
            sb2.append('\"');
            return;
        }
        if (obj instanceof g) {
            sb2.append(": \"");
            sb2.append(d9.a.l((g) obj));
            sb2.append('\"');
            return;
        }
        if (obj instanceof r) {
            sb2.append(" {");
            c((r) obj, sb2, i5 + 2);
            sb2.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
            a(sb2, i5);
            sb2.append("}");
            return;
        }
        if (!(obj instanceof Map.Entry)) {
            sb2.append(": ");
            sb2.append(obj);
            return;
        }
        sb2.append(" {");
        Map.Entry entry = (Map.Entry) obj;
        int i10 = i5 + 2;
        b(sb2, i10, "key", entry.getKey());
        b(sb2, i10, "value", entry.getValue());
        sb2.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
        a(sb2, i5);
        sb2.append("}");
    }

    /* JADX WARN: Code restructure failed: missing block: B:84:0x019a, code lost:
    
        if (((java.lang.Integer) r7).intValue() == 0) goto L75;
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x019c, code lost:
    
        r13 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:90:0x01af, code lost:
    
        if (java.lang.Float.floatToRawIntBits(((java.lang.Float) r7).floatValue()) == 0) goto L75;
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x01c5, code lost:
    
        if (java.lang.Double.doubleToRawLongBits(((java.lang.Double) r7).doubleValue()) == 0) goto L75;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void c(r rVar, StringBuilder sb2, int i5) {
        int i6;
        int i10;
        boolean booleanValue;
        boolean equals;
        Method method;
        Method method2;
        HashSet hashSet = new HashSet();
        HashMap hashMap = new HashMap();
        TreeMap treeMap = new TreeMap();
        Method[] declaredMethods = rVar.getClass().getDeclaredMethods();
        int length = declaredMethods.length;
        int i11 = 0;
        while (true) {
            i6 = 3;
            if (i11 >= length) {
                break;
            }
            Method method3 = declaredMethods[i11];
            if (!Modifier.isStatic(method3.getModifiers()) && method3.getName().length() >= 3) {
                if (method3.getName().startsWith("set")) {
                    hashSet.add(method3.getName());
                } else if (Modifier.isPublic(method3.getModifiers()) && method3.getParameterTypes().length == 0) {
                    if (method3.getName().startsWith("has")) {
                        hashMap.put(method3.getName(), method3);
                    } else if (method3.getName().startsWith("get")) {
                        treeMap.put(method3.getName(), method3);
                    }
                }
            }
            i11++;
        }
        for (Map.Entry entry : treeMap.entrySet()) {
            String substring = ((String) entry.getKey()).substring(i6);
            if (!substring.endsWith("List") || substring.endsWith("OrBuilderList") || substring.equals("List") || (method2 = (Method) entry.getValue()) == null) {
                i10 = i6;
            } else {
                i10 = i6;
                if (method2.getReturnType().equals(List.class)) {
                    b(sb2, i5, substring.substring(0, substring.length() - 4), r.c(method2, rVar, new Object[0]));
                    i6 = i10;
                }
            }
            if (substring.endsWith("Map") && !substring.equals("Map") && (method = (Method) entry.getValue()) != null && method.getReturnType().equals(Map.class) && !method.isAnnotationPresent(Deprecated.class) && Modifier.isPublic(method.getModifiers())) {
                b(sb2, i5, substring.substring(0, substring.length() - 3), r.c(method, rVar, new Object[0]));
            } else if (hashSet.contains("set".concat(substring))) {
                if (substring.endsWith("Bytes")) {
                    if (treeMap.containsKey("get" + substring.substring(0, substring.length() - 5))) {
                    }
                }
                Method method4 = (Method) entry.getValue();
                Method method5 = (Method) hashMap.get("has".concat(substring));
                if (method4 != null) {
                    Object c6 = r.c(method4, rVar, new Object[0]);
                    if (method5 == null) {
                        booleanValue = true;
                        if (c6 instanceof Boolean) {
                            equals = !((Boolean) c6).booleanValue();
                        } else if (!(c6 instanceof Integer)) {
                            if (!(c6 instanceof Float)) {
                                if (!(c6 instanceof Double)) {
                                    equals = c6 instanceof String ? c6.equals("") : c6 instanceof g ? c6.equals(g.f10858i) : !(c6 instanceof b) ? false : false;
                                }
                            }
                        }
                        if (equals) {
                            booleanValue = false;
                        }
                    } else {
                        booleanValue = ((Boolean) r.c(method5, rVar, new Object[0])).booleanValue();
                    }
                    if (booleanValue) {
                        b(sb2, i5, substring, c6);
                    }
                }
            }
            i6 = i10;
        }
        t0 t0Var = rVar.f10920c;
        if (t0Var != null) {
            for (int i12 = 0; i12 < t0Var.a; i12++) {
                b(sb2, i5, String.valueOf(t0Var.f10925b[i12] >>> 3), t0Var.f10926c[i12]);
            }
        }
    }
}

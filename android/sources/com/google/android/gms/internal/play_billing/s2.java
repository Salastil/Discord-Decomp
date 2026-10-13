package com.google.android.gms.internal.play_billing;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.nio.charset.StandardCharsets;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

/* loaded from: classes3.dex */
public abstract class s2 {
    public static final char[] a;

    static {
        char[] cArr = new char[80];
        a = cArr;
        Arrays.fill(cArr, ' ');
    }

    public static void a(StringBuilder sb2, int i5, String str, Object obj) {
        byte[] bArr;
        String replace;
        if (obj instanceof List) {
            Iterator it = ((List) obj).iterator();
            while (it.hasNext()) {
                a(sb2, i5, str, it.next());
            }
            return;
        }
        if (obj instanceof Map) {
            Iterator it2 = ((Map) obj).entrySet().iterator();
            while (it2.hasNext()) {
                a(sb2, i5, str, (Map.Entry) it2.next());
            }
            return;
        }
        sb2.append('\n');
        b(sb2, i5);
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
            String str2 = (String) obj;
            boolean z5 = false;
            boolean z6 = false;
            boolean z7 = false;
            for (int i10 = 0; i10 < str2.length(); i10++) {
                char charAt2 = str2.charAt(i10);
                if (charAt2 < ' ' || charAt2 > '~') {
                    replace = a2.g(str2.getBytes(StandardCharsets.UTF_8));
                    break;
                }
                if (charAt2 == '\"') {
                    z7 = true;
                } else if (charAt2 == '\'') {
                    z6 = true;
                } else if (charAt2 == '\\') {
                    z5 = true;
                }
            }
            if (z5) {
                str2 = str2.replace("\\", "\\\\");
            }
            replace = z6 ? str2.replace("'", "\\'") : str2;
            if (z7) {
                replace = replace.replace("\"", "\\\"");
            }
            sb2.append(replace);
            sb2.append('\"');
            return;
        }
        if (obj instanceof u1) {
            sb2.append(": \"");
            u1 u1Var = (u1) obj;
            int d6 = u1Var.d();
            if (d6 == 0) {
                bArr = j2.a;
            } else {
                byte[] bArr2 = new byte[d6];
                u1Var.h(bArr2, d6);
                bArr = bArr2;
            }
            sb2.append(a2.g(bArr));
            sb2.append('\"');
            return;
        }
        if (obj instanceof e2) {
            sb2.append(" {");
            c((e2) obj, sb2, i5 + 2);
            sb2.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
            b(sb2, i5);
            sb2.append("}");
            return;
        }
        if (!(obj instanceof Map.Entry)) {
            sb2.append(": ");
            sb2.append(obj);
            return;
        }
        int i11 = i5 + 2;
        sb2.append(" {");
        Map.Entry entry = (Map.Entry) obj;
        a(sb2, i11, "key", entry.getKey());
        a(sb2, i11, "value", entry.getValue());
        sb2.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
        b(sb2, i5);
        sb2.append("}");
    }

    public static void b(StringBuilder sb2, int i5) {
        while (i5 > 0) {
            int i6 = 80;
            if (i5 <= 80) {
                i6 = i5;
            }
            sb2.append(a, 0, i6);
            i5 -= i6;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:75:0x0182, code lost:
    
        if (((java.lang.Boolean) r7).booleanValue() == false) goto L67;
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x0184, code lost:
    
        r13 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x0192, code lost:
    
        if (((java.lang.Integer) r7).intValue() == 0) goto L67;
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x01a4, code lost:
    
        if (java.lang.Float.floatToRawIntBits(((java.lang.Float) r7).floatValue()) == 0) goto L67;
     */
    /* JADX WARN: Code restructure failed: missing block: B:93:0x01ba, code lost:
    
        if (java.lang.Double.doubleToRawLongBits(((java.lang.Double) r7).doubleValue()) == 0) goto L67;
     */
    /* JADX WARN: Code restructure failed: missing block: B:97:0x01d2, code lost:
    
        if (r13 != false) goto L67;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void c(e2 e2Var, StringBuilder sb2, int i5) {
        int i6;
        int i10;
        boolean booleanValue;
        boolean equals;
        Method method;
        Method method2;
        HashSet hashSet = new HashSet();
        HashMap hashMap = new HashMap();
        TreeMap treeMap = new TreeMap();
        Method[] declaredMethods = e2Var.getClass().getDeclaredMethods();
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
                    a(sb2, i5, substring.substring(0, substring.length() - 4), e2.p(method2, e2Var, new Object[0]));
                    i6 = i10;
                }
            }
            if (substring.endsWith("Map") && !substring.equals("Map") && (method = (Method) entry.getValue()) != null && method.getReturnType().equals(Map.class) && !method.isAnnotationPresent(Deprecated.class) && Modifier.isPublic(method.getModifiers())) {
                a(sb2, i5, substring.substring(0, substring.length() - 3), e2.p(method, e2Var, new Object[0]));
            } else if (hashSet.contains("set".concat(substring)) && (!substring.endsWith("Bytes") || !treeMap.containsKey("get".concat(String.valueOf(substring.substring(0, substring.length() - 5)))))) {
                Method method4 = (Method) entry.getValue();
                Method method5 = (Method) hashMap.get("has".concat(substring));
                if (method4 != null) {
                    Object p3 = e2.p(method4, e2Var, new Object[0]);
                    if (method5 != null) {
                        booleanValue = ((Boolean) e2.p(method5, e2Var, new Object[0])).booleanValue();
                    } else if (!(p3 instanceof Boolean)) {
                        if (!(p3 instanceof Integer)) {
                            if (!(p3 instanceof Float)) {
                                if (!(p3 instanceof Double)) {
                                    if (p3 instanceof String) {
                                        equals = p3.equals("");
                                    } else if (p3 instanceof u1) {
                                        equals = p3.equals(u1.f5850e);
                                    } else {
                                        booleanValue = !(p3 instanceof p1) ? true : true;
                                    }
                                }
                            }
                        }
                    }
                    if (booleanValue) {
                        a(sb2, i5, substring, p3);
                    }
                }
            }
            i6 = i10;
        }
        g3 g3Var = e2Var.zzc;
        if (g3Var != null) {
            for (int i12 = 0; i12 < g3Var.a; i12++) {
                a(sb2, i5, String.valueOf(g3Var.f5741b[i12] >>> 3), g3Var.f5742c[i12]);
            }
        }
    }
}

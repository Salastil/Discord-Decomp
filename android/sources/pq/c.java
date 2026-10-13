package pq;

import com.facebook.react.devsupport.StackTraceHelper;
import fp.k;
import java.util.EnumMap;
import java.util.HashMap;
import java.util.HashSet;

/* loaded from: classes3.dex */
public enum c {
    BOOLEAN(k.f8866x, "boolean", "Z", "java.lang.Boolean"),
    CHAR(k.f8867y, "char", "C", "java.lang.Character"),
    BYTE(k.E, "byte", "B", "java.lang.Byte"),
    SHORT(k.F, "short", "S", "java.lang.Short"),
    INT(k.G, "int", "I", "java.lang.Integer"),
    FLOAT(k.H, "float", "F", "java.lang.Float"),
    LONG(k.I, "long", "J", "java.lang.Long"),
    DOUBLE(k.J, "double", "D", "java.lang.Double");

    public static final HashMap J = new HashMap();
    public static final EnumMap K = new EnumMap(k.class);
    public static final HashMap L = new HashMap();
    public static final HashSet M = new HashSet();
    public static final HashMap N = new HashMap();

    /* renamed from: d, reason: collision with root package name */
    public final k f16462d;

    /* renamed from: e, reason: collision with root package name */
    public final String f16463e;

    /* renamed from: i, reason: collision with root package name */
    public final String f16464i;

    /* renamed from: v, reason: collision with root package name */
    public final hq.c f16465v;

    static {
        for (c cVar : values()) {
            J.put(cVar.f16463e, cVar);
            K.put((EnumMap) cVar.d(), (k) cVar);
            L.put(cVar.c(), cVar);
            String replace = cVar.f16465v.a.a.replace('.', '/');
            M.add(replace);
            N.put(replace, com.discord.chat.bridge.botuikit.a.k(new StringBuilder("("), cVar.f16464i, ")L", replace, ";"));
        }
    }

    c(k kVar, String str, String str2, String str3) {
        if (kVar == null) {
            a(8);
            throw null;
        }
        this.f16462d = kVar;
        this.f16463e = str;
        this.f16464i = str2;
        this.f16465v = new hq.c(str3);
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0016  */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0021  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0050 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0071  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0076  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x007b  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0080  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0083  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x008d A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0092  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x0026  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x002b  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x0030  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0035  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x003a  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x003d  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x0042  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x0047  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void a(int i5) {
        String str;
        int i6;
        Object[] objArr;
        if (i5 != 4 && i5 != 6) {
            switch (i5) {
                case 12:
                case 13:
                case 14:
                case 15:
                    break;
                default:
                    str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                    break;
            }
            if (i5 != 4 && i5 != 6) {
                switch (i5) {
                    case 12:
                    case 13:
                    case 14:
                    case 15:
                        break;
                    default:
                        i6 = 3;
                        break;
                }
                objArr = new Object[i6];
                switch (i5) {
                    case 1:
                        objArr[0] = "owner";
                        break;
                    case 2:
                        objArr[0] = "methodDescriptor";
                        break;
                    case 3:
                    case 9:
                        objArr[0] = StackTraceHelper.NAME_KEY;
                        break;
                    case 4:
                    case 6:
                    case 12:
                    case 13:
                    case 14:
                    case 15:
                        objArr[0] = "kotlin/reflect/jvm/internal/impl/resolve/jvm/JvmPrimitiveType";
                        break;
                    case 5:
                        objArr[0] = "type";
                        break;
                    case 7:
                    case 10:
                        objArr[0] = "desc";
                        break;
                    case 8:
                        objArr[0] = "primitiveType";
                        break;
                    case 11:
                        objArr[0] = "wrapperClassName";
                        break;
                    default:
                        objArr[0] = "internalName";
                        break;
                }
                if (i5 == 4 && i5 != 6) {
                    switch (i5) {
                        case 12:
                            objArr[1] = "getPrimitiveType";
                            break;
                        case 13:
                            objArr[1] = "getJavaKeywordName";
                            break;
                        case 14:
                            objArr[1] = "getDesc";
                            break;
                        case 15:
                            objArr[1] = "getWrapperFqName";
                            break;
                        default:
                            objArr[1] = "kotlin/reflect/jvm/internal/impl/resolve/jvm/JvmPrimitiveType";
                            break;
                    }
                } else {
                    objArr[1] = "get";
                }
                switch (i5) {
                    case 1:
                    case 2:
                        objArr[2] = "isBoxingMethodDescriptor";
                        break;
                    case 3:
                    case 5:
                        objArr[2] = "get";
                        break;
                    case 4:
                    case 6:
                    case 12:
                    case 13:
                    case 14:
                    case 15:
                        break;
                    case 7:
                        objArr[2] = "getByDesc";
                        break;
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                        objArr[2] = "<init>";
                        break;
                    default:
                        objArr[2] = "isWrapperClassInternalName";
                        break;
                }
                String format = String.format(str, objArr);
                if (i5 != 4 && i5 != 6) {
                    switch (i5) {
                        case 12:
                        case 13:
                        case 14:
                        case 15:
                            break;
                        default:
                            throw new IllegalArgumentException(format);
                    }
                }
                throw new IllegalStateException(format);
            }
            i6 = 2;
            objArr = new Object[i6];
            switch (i5) {
            }
            if (i5 == 4) {
            }
            objArr[1] = "get";
            switch (i5) {
            }
            String format2 = String.format(str, objArr);
            if (i5 != 4) {
                switch (i5) {
                }
            }
            throw new IllegalStateException(format2);
        }
        str = "@NotNull method %s.%s must not return null";
        if (i5 != 4) {
            switch (i5) {
            }
            objArr = new Object[i6];
            switch (i5) {
            }
            if (i5 == 4) {
            }
            objArr[1] = "get";
            switch (i5) {
            }
            String format22 = String.format(str, objArr);
            if (i5 != 4) {
            }
            throw new IllegalStateException(format22);
        }
        i6 = 2;
        objArr = new Object[i6];
        switch (i5) {
        }
        if (i5 == 4) {
        }
        objArr[1] = "get";
        switch (i5) {
        }
        String format222 = String.format(str, objArr);
        if (i5 != 4) {
        }
        throw new IllegalStateException(format222);
    }

    public static c b(String str) {
        c cVar = (c) J.get(str);
        if (cVar != null) {
            return cVar;
        }
        throw new AssertionError("Non-primitive type name passed: ".concat(str));
    }

    public final String c() {
        String str = this.f16464i;
        if (str != null) {
            return str;
        }
        a(14);
        throw null;
    }

    public final k d() {
        k kVar = this.f16462d;
        if (kVar != null) {
            return kVar;
        }
        a(12);
        throw null;
    }
}

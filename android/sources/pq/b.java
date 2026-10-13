package pq;

/* loaded from: classes3.dex */
public final class b {
    public final String a;

    public b(String str) {
        if (str != null) {
            this.a = str;
        } else {
            a(7);
            throw null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0016  */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0021  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0039  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x005d  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0062  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0065  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0068  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0072 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0077  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x0053  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x0026  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x002b  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x002e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void a(int i5) {
        String str;
        int i6;
        if (i5 != 3 && i5 != 5) {
            switch (i5) {
                case 8:
                case 9:
                case 10:
                    break;
                default:
                    str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                    break;
            }
            if (i5 != 3 && i5 != 5) {
                switch (i5) {
                    case 8:
                    case 9:
                    case 10:
                        break;
                    default:
                        i6 = 3;
                        break;
                }
                Object[] objArr = new Object[i6];
                switch (i5) {
                    case 1:
                    case 2:
                        objArr[0] = "classId";
                        break;
                    case 3:
                    case 5:
                    case 8:
                    case 9:
                    case 10:
                        objArr[0] = "kotlin/reflect/jvm/internal/impl/resolve/jvm/JvmClassName";
                        break;
                    case 4:
                    case 6:
                        objArr[0] = "fqName";
                        break;
                    case 7:
                    default:
                        objArr[0] = "internalName";
                        break;
                }
                if (i5 != 3) {
                    objArr[1] = "internalNameByClassId";
                } else if (i5 != 5) {
                    switch (i5) {
                        case 8:
                            objArr[1] = "getFqNameForClassNameWithoutDollars";
                            break;
                        case 9:
                            objArr[1] = "getPackageFqName";
                            break;
                        case 10:
                            objArr[1] = "getInternalName";
                            break;
                        default:
                            objArr[1] = "kotlin/reflect/jvm/internal/impl/resolve/jvm/JvmClassName";
                            break;
                    }
                } else {
                    objArr[1] = "byFqNameWithoutInnerClasses";
                }
                switch (i5) {
                    case 1:
                        objArr[2] = "byClassId";
                        break;
                    case 2:
                        objArr[2] = "internalNameByClassId";
                        break;
                    case 3:
                    case 5:
                    case 8:
                    case 9:
                    case 10:
                        break;
                    case 4:
                    case 6:
                        objArr[2] = "byFqNameWithoutInnerClasses";
                        break;
                    case 7:
                        objArr[2] = "<init>";
                        break;
                    default:
                        objArr[2] = "byInternalName";
                        break;
                }
                String format = String.format(str, objArr);
                if (i5 != 3 && i5 != 5) {
                    switch (i5) {
                        case 8:
                        case 9:
                        case 10:
                            break;
                        default:
                            throw new IllegalArgumentException(format);
                    }
                }
                throw new IllegalStateException(format);
            }
            i6 = 2;
            Object[] objArr2 = new Object[i6];
            switch (i5) {
            }
            if (i5 != 3) {
            }
            switch (i5) {
            }
            String format2 = String.format(str, objArr2);
            if (i5 != 3) {
                switch (i5) {
                }
            }
            throw new IllegalStateException(format2);
        }
        str = "@NotNull method %s.%s must not return null";
        if (i5 != 3) {
            switch (i5) {
            }
            Object[] objArr22 = new Object[i6];
            switch (i5) {
            }
            if (i5 != 3) {
            }
            switch (i5) {
            }
            String format22 = String.format(str, objArr22);
            if (i5 != 3) {
            }
            throw new IllegalStateException(format22);
        }
        i6 = 2;
        Object[] objArr222 = new Object[i6];
        switch (i5) {
        }
        if (i5 != 3) {
        }
        switch (i5) {
        }
        String format222 = String.format(str, objArr222);
        if (i5 != 3) {
        }
        throw new IllegalStateException(format222);
    }

    public static b b(hq.c cVar) {
        if (cVar != null) {
            return new b(cVar.a.a.replace('.', '/'));
        }
        a(4);
        throw null;
    }

    public static b c(String str) {
        if (str != null) {
            return new b(str);
        }
        a(0);
        throw null;
    }

    public static String e(hq.b bVar) {
        hq.c cVar = bVar.a;
        String replace = bVar.f10201b.a.a.replace('.', '$');
        if (!cVar.a.c()) {
            replace = cVar.a.a.replace('.', '/') + "/" + replace;
        }
        if (replace != null) {
            return replace;
        }
        a(3);
        throw null;
    }

    public final String d() {
        String str = this.a;
        if (str != null) {
            return str;
        }
        a(10);
        throw null;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || b.class != obj.getClass()) {
            return false;
        }
        return this.a.equals(((b) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return this.a;
    }
}

package eq;

import iq.o;

/* loaded from: classes3.dex */
public final class c extends d {

    /* renamed from: d, reason: collision with root package name */
    public final o[] f8190d;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public c(int i5, o[] oVarArr) {
        super(i5, r1, 0);
        if (oVarArr == null) {
            throw new IllegalArgumentException("Argument for @NotNull parameter 'enumEntries' of kotlin/reflect/jvm/internal/impl/metadata/deserialization/Flags$EnumLiteFlagField.bitWidth must not be null");
        }
        int i6 = 1;
        int length = oVarArr.length - 1;
        if (length != 0) {
            for (int i10 = 31; i10 >= 0; i10--) {
                if (((1 << i10) & length) != 0) {
                    i6 = 1 + i10;
                }
            }
            throw new IllegalStateException("Empty enum: " + oVarArr.getClass());
        }
        this.f8190d = oVarArr;
    }

    public final Object g(int i5) {
        int i6 = (1 << this.f8192c) - 1;
        int i10 = this.f8191b;
        int i11 = (i5 & (i6 << i10)) >> i10;
        for (o oVar : this.f8190d) {
            if (oVar.a() == i11) {
                return oVar;
            }
        }
        return null;
    }
}

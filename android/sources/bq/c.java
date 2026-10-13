package bq;

import aq.m;
import ha.l;

/* loaded from: classes3.dex */
public final class c extends b {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f3144i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ m f3145v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ c(m mVar, int i5) {
        super(0);
        this.f3144i = i5;
        this.f3145v = mVar;
    }

    @Override // bq.b
    public final void y0(String[] strArr) {
        switch (this.f3144i) {
            case 0:
                if (strArr == null) {
                    throw new IllegalArgumentException("Argument for @NotNull parameter 'result' of kotlin/reflect/jvm/internal/impl/load/kotlin/header/ReadKotlinClassHeaderAnnotationVisitor$KotlinMetadataArgumentVisitor$1.visitEnd must not be null");
                }
                ((e) ((gj.c) this.f3145v).f9329e).f3151v = strArr;
                return;
            case 1:
                if (strArr == null) {
                    throw new IllegalArgumentException("Argument for @NotNull parameter 'result' of kotlin/reflect/jvm/internal/impl/load/kotlin/header/ReadKotlinClassHeaderAnnotationVisitor$KotlinMetadataArgumentVisitor$2.visitEnd must not be null");
                }
                ((e) ((gj.c) this.f3145v).f9329e).f3152w = strArr;
                return;
            default:
                if (strArr == null) {
                    throw new IllegalArgumentException("Argument for @NotNull parameter 'result' of kotlin/reflect/jvm/internal/impl/load/kotlin/header/ReadKotlinClassHeaderAnnotationVisitor$KotlinSerializedIrArgumentVisitor$1.visitEnd must not be null");
                }
                ((e) ((l) this.f3145v).f9613d).E = strArr;
                return;
        }
    }
}

package bq;

/* loaded from: classes3.dex */
public final class d extends b {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f3146i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ u4.b f3147v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ d(u4.b bVar, int i5) {
        super(0);
        this.f3146i = i5;
        this.f3147v = bVar;
    }

    @Override // bq.b
    public final void y0(String[] strArr) {
        switch (this.f3146i) {
            case 0:
                if (strArr == null) {
                    throw new IllegalArgumentException("Argument for @NotNull parameter 'data' of kotlin/reflect/jvm/internal/impl/load/kotlin/header/ReadKotlinClassHeaderAnnotationVisitor$OldDeprecatedAnnotationArgumentVisitor$1.visitEnd must not be null");
                }
                ((e) this.f3147v.f18810e).f3151v = strArr;
                return;
            default:
                if (strArr == null) {
                    throw new IllegalArgumentException("Argument for @NotNull parameter 'data' of kotlin/reflect/jvm/internal/impl/load/kotlin/header/ReadKotlinClassHeaderAnnotationVisitor$OldDeprecatedAnnotationArgumentVisitor$2.visitEnd must not be null");
                }
                ((e) this.f3147v.f18810e).f3152w = strArr;
                return;
        }
    }
}

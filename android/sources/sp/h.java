package sp;

/* loaded from: classes3.dex */
public final class h {
    public static final h a = new h();

    /* renamed from: b, reason: collision with root package name */
    public static final h f18088b = new h();

    /* renamed from: c, reason: collision with root package name */
    public static final h f18089c = new h();

    public static /* synthetic */ void a(int i5) {
        Object[] objArr = new Object[3];
        switch (i5) {
            case 1:
                objArr[0] = "owner";
                break;
            case 2:
                objArr[0] = "returnType";
                break;
            case 3:
                objArr[0] = "valueParameters";
                break;
            case 4:
                objArr[0] = "typeParameters";
                break;
            case 5:
                objArr[0] = "descriptor";
                break;
            case 6:
                objArr[0] = "signatureErrors";
                break;
            default:
                objArr[0] = "method";
                break;
        }
        objArr[1] = "kotlin/reflect/jvm/internal/impl/load/java/components/SignaturePropagator$1";
        if (i5 == 5 || i5 == 6) {
            objArr[2] = "reportSignatureErrors";
        } else {
            objArr[2] = "resolvePropagatedSignature";
        }
        throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", objArr));
    }
}

package ui;

/* loaded from: classes3.dex */
public final class h implements ri.g {
    public boolean a = false;

    /* renamed from: b, reason: collision with root package name */
    public boolean f18943b = false;

    /* renamed from: c, reason: collision with root package name */
    public ri.c f18944c;

    /* renamed from: d, reason: collision with root package name */
    public final f f18945d;

    public h(f fVar) {
        this.f18945d = fVar;
    }

    @Override // ri.g
    public final ri.g b(String str) {
        if (this.a) {
            throw new ri.b("Cannot encode a second value in the ValueEncoderContext");
        }
        this.a = true;
        this.f18945d.c(this.f18944c, str, this.f18943b);
        return this;
    }

    @Override // ri.g
    public final ri.g c(boolean z5) {
        if (this.a) {
            throw new ri.b("Cannot encode a second value in the ValueEncoderContext");
        }
        this.a = true;
        this.f18945d.b(this.f18944c, z5 ? 1 : 0, this.f18943b);
        return this;
    }
}

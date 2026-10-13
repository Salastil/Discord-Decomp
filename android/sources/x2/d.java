package x2;

/* loaded from: classes.dex */
public final class d extends c {

    /* renamed from: f, reason: collision with root package name */
    public long f20254f;

    /* renamed from: g, reason: collision with root package name */
    public long f20255g;

    @Override // x2.c, androidx.metrics.performance.FrameData
    public final boolean equals(Object obj) {
        if (!(obj instanceof d) || !super.equals(obj)) {
            return false;
        }
        d dVar = (d) obj;
        return this.f20254f == dVar.f20254f && this.f20255g == dVar.f20255g;
    }

    @Override // x2.c, androidx.metrics.performance.FrameData
    public final int hashCode() {
        return Long.hashCode(this.f20255g) + (Long.hashCode(this.f20254f) * 31) + (super.hashCode() * 31);
    }

    @Override // x2.c, androidx.metrics.performance.FrameData
    public final String toString() {
        return "FrameData(frameStartNanos=" + this.f2246b + ", frameDurationUiNanos=" + this.f2247c + ", frameDurationCpuNanos=" + this.f20253e + ", frameDurationTotalNanos=" + this.f20254f + ", frameOverrunNanos=" + this.f20255g + ", isJank=" + this.f2248d + ", states=" + this.a + ')';
    }
}

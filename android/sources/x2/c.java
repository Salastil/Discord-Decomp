package x2;

import androidx.metrics.performance.FrameData;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class c extends FrameData {

    /* renamed from: e, reason: collision with root package name */
    public long f20253e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(ArrayList states) {
        super(states);
        Intrinsics.checkNotNullParameter(states, "states");
        this.f20253e = 0L;
    }

    @Override // androidx.metrics.performance.FrameData
    public boolean equals(Object obj) {
        return (obj instanceof c) && super.equals(obj) && this.f20253e == ((c) obj).f20253e;
    }

    @Override // androidx.metrics.performance.FrameData
    public int hashCode() {
        return Long.hashCode(this.f20253e) + (super.hashCode() * 31);
    }

    @Override // androidx.metrics.performance.FrameData
    public String toString() {
        return "FrameData(frameStartNanos=" + this.f2246b + ", frameDurationUiNanos=" + this.f2247c + ", frameDurationCpuNanos=" + this.f20253e + ", isJank=" + this.f2248d + ", states=" + this.a + ')';
    }
}

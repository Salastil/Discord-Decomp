package androidx.metrics.performance;

import com.discord.chat.bridge.botuikit.a;
import java.util.List;
import k0.d;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class FrameData {
    public final List a;

    /* renamed from: b, reason: collision with root package name */
    public long f2246b;

    /* renamed from: c, reason: collision with root package name */
    public long f2247c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f2248d;

    public FrameData(List states) {
        Intrinsics.checkNotNullParameter(states, "states");
        this.a = states;
        this.f2246b = 0L;
        this.f2247c = 0L;
        this.f2248d = false;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(getClass(), obj != null ? obj.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type androidx.metrics.performance.FrameData");
        FrameData frameData = (FrameData) obj;
        return this.f2246b == frameData.f2246b && this.f2247c == frameData.f2247c && this.f2248d == frameData.f2248d && Intrinsics.areEqual(this.a, frameData.a);
    }

    public int hashCode() {
        return this.a.hashCode() + d.d(a.g(this.f2247c, Long.hashCode(this.f2246b) * 31, 31), 31, this.f2248d);
    }

    public String toString() {
        return "FrameData(frameStartNanos=" + this.f2246b + ", frameDurationUiNanos=" + this.f2247c + ", isJank=" + this.f2248d + ", states=" + this.a + ')';
    }
}

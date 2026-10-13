package app.rive.runtime.kotlin;

import a3.e;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import kotlin.Metadata;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000'\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0007\n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000*\u0001\u0000\b\u008a\b\u0018\u00002\u00020\u0001B\u001d\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005¢\u0006\u0002\u0010\u0007J\t\u0010\r\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000e\u001a\u00020\u0005HÆ\u0003J\t\u0010\u000f\u001a\u00020\u0005HÆ\u0003J,\u0010\u0010\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0005HÆ\u0001¢\u0006\u0002\u0010\u0011J\u0013\u0010\u0012\u001a\u00020\u00132\b\u0010\u0014\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0015\u001a\u00020\u0003HÖ\u0001J\t\u0010\u0016\u001a\u00020\u0017HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\u000b¨\u0006\u0018"}, d2 = {"app/rive/runtime/kotlin/RiveAnimationView$onTouchEvent$PointerInfo", "", StackTraceHelper.ID_KEY, "", "x", "", "y", "(IFF)V", "getId", "()I", "getX", "()F", "getY", "component1", "component2", "component3", "copy", "(IFF)Lapp/rive/runtime/kotlin/RiveAnimationView$onTouchEvent$PointerInfo;", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class RiveAnimationView$onTouchEvent$PointerInfo {
    private final int id;
    private final float x;
    private final float y;

    public RiveAnimationView$onTouchEvent$PointerInfo(int i5, float f2, float f10) {
        this.id = i5;
        this.x = f2;
        this.y = f10;
    }

    public static /* synthetic */ RiveAnimationView$onTouchEvent$PointerInfo copy$default(RiveAnimationView$onTouchEvent$PointerInfo riveAnimationView$onTouchEvent$PointerInfo, int i5, float f2, float f10, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = riveAnimationView$onTouchEvent$PointerInfo.id;
        }
        if ((i6 & 2) != 0) {
            f2 = riveAnimationView$onTouchEvent$PointerInfo.x;
        }
        if ((i6 & 4) != 0) {
            f10 = riveAnimationView$onTouchEvent$PointerInfo.y;
        }
        return riveAnimationView$onTouchEvent$PointerInfo.copy(i5, f2, f10);
    }

    /* renamed from: component1, reason: from getter */
    public final int getId() {
        return this.id;
    }

    /* renamed from: component2, reason: from getter */
    public final float getX() {
        return this.x;
    }

    /* renamed from: component3, reason: from getter */
    public final float getY() {
        return this.y;
    }

    @NotNull
    public final RiveAnimationView$onTouchEvent$PointerInfo copy(int id2, float x5, float y5) {
        return new RiveAnimationView$onTouchEvent$PointerInfo(id2, x5, y5);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof RiveAnimationView$onTouchEvent$PointerInfo)) {
            return false;
        }
        RiveAnimationView$onTouchEvent$PointerInfo riveAnimationView$onTouchEvent$PointerInfo = (RiveAnimationView$onTouchEvent$PointerInfo) other;
        return this.id == riveAnimationView$onTouchEvent$PointerInfo.id && Float.compare(this.x, riveAnimationView$onTouchEvent$PointerInfo.x) == 0 && Float.compare(this.y, riveAnimationView$onTouchEvent$PointerInfo.y) == 0;
    }

    public final int getId() {
        return this.id;
    }

    public final float getX() {
        return this.x;
    }

    public final float getY() {
        return this.y;
    }

    public int hashCode() {
        return Float.hashCode(this.y) + e.a(Integer.hashCode(this.id) * 31, 31, this.x);
    }

    @NotNull
    public String toString() {
        return "PointerInfo(id=" + this.id + ", x=" + this.x + ", y=" + this.y + ")";
    }
}

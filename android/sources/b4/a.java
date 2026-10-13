package b4;

import android.os.Build;
import c4.i;
import e4.o;
import kotlin.jvm.internal.Intrinsics;
import v3.q;

/* loaded from: classes.dex */
public final class a extends e {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f2733b;

    /* renamed from: c, reason: collision with root package name */
    public final int f2734c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(c4.a tracker) {
        super(tracker);
        this.f2733b = 0;
        Intrinsics.checkNotNullParameter(tracker, "tracker");
        this.f2734c = 6;
    }

    @Override // b4.e
    public final int a() {
        switch (this.f2733b) {
        }
        return this.f2734c;
    }

    @Override // b4.e
    public final boolean b(o workSpec) {
        switch (this.f2733b) {
            case 0:
                Intrinsics.checkNotNullParameter(workSpec, "workSpec");
                return workSpec.j.f19194b;
            case 1:
                Intrinsics.checkNotNullParameter(workSpec, "workSpec");
                return workSpec.j.f19196d;
            case 2:
                Intrinsics.checkNotNullParameter(workSpec, "workSpec");
                return workSpec.j.a == q.f19213e;
            case 3:
                Intrinsics.checkNotNullParameter(workSpec, "workSpec");
                q qVar = workSpec.j.a;
                return qVar == q.f19214i || (Build.VERSION.SDK_INT >= 30 && qVar == q.f19217x);
            default:
                Intrinsics.checkNotNullParameter(workSpec, "workSpec");
                return workSpec.j.f19197e;
        }
    }

    @Override // b4.e
    public final boolean c(Object obj) {
        boolean booleanValue;
        switch (this.f2733b) {
            case 0:
                booleanValue = ((Boolean) obj).booleanValue();
                break;
            case 1:
                booleanValue = ((Boolean) obj).booleanValue();
                break;
            case 2:
                a4.d value = (a4.d) obj;
                Intrinsics.checkNotNullParameter(value, "value");
                return Build.VERSION.SDK_INT < 26 ? !value.a : !(value.a && value.f103b);
            case 3:
                a4.d value2 = (a4.d) obj;
                Intrinsics.checkNotNullParameter(value2, "value");
                return !value2.a || value2.f104c;
            default:
                booleanValue = ((Boolean) obj).booleanValue();
                break;
        }
        return !booleanValue;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(c4.a tracker, byte b10) {
        super(tracker);
        this.f2733b = 1;
        Intrinsics.checkNotNullParameter(tracker, "tracker");
        this.f2734c = 5;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(c4.a tracker, char c6) {
        super(tracker);
        this.f2733b = 4;
        Intrinsics.checkNotNullParameter(tracker, "tracker");
        this.f2734c = 9;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(i tracker, int i5) {
        super(tracker);
        this.f2733b = i5;
        switch (i5) {
            case 3:
                Intrinsics.checkNotNullParameter(tracker, "tracker");
                super(tracker);
                this.f2734c = 7;
                break;
            default:
                Intrinsics.checkNotNullParameter(tracker, "tracker");
                this.f2734c = 7;
                break;
        }
    }
}

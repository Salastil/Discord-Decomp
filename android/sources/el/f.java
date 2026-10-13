package el;

import com.otaliastudios.zoom.AbsolutePoint;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes3.dex */
public final class f extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ float f8158d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ float f8159e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(float f2, float f10) {
        super(1);
        this.f8158d = f2;
        this.f8159e = f10;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        hl.c obtain = (hl.c) obj;
        Intrinsics.checkNotNullParameter(obtain, "$this$obtain");
        AbsolutePoint absolutePoint = new AbsolutePoint(this.f8158d, this.f8159e);
        obtain.f10098d = null;
        obtain.f10097c = absolutePoint;
        obtain.f10099e = true;
        obtain.f10100f = false;
        return Unit.a;
    }
}

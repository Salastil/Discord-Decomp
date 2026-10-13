package el;

import com.otaliastudios.zoom.AbsolutePoint;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes3.dex */
public final class e extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ float f8155d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ float f8156e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ float f8157i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(float f2, float f10, float f11) {
        super(1);
        this.f8155d = f2;
        this.f8156e = f10;
        this.f8157i = f11;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        hl.c obtain = (hl.c) obj;
        Intrinsics.checkNotNullParameter(obtain, "$this$obtain");
        obtain.a = this.f8155d;
        obtain.f10096b = false;
        AbsolutePoint absolutePoint = new AbsolutePoint(this.f8156e, this.f8157i);
        obtain.f10098d = null;
        obtain.f10097c = absolutePoint;
        obtain.f10099e = false;
        obtain.f10100f = false;
        return Unit.a;
    }
}

package el;

import com.otaliastudios.zoom.ZoomEngine;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes3.dex */
public final class b extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8151d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ZoomEngine f8152e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ b(ZoomEngine zoomEngine, int i5) {
        super(1);
        this.f8151d = i5;
        this.f8152e = zoomEngine;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f8151d) {
            case 0:
                hl.c applyUpdate = (hl.c) obj;
                Intrinsics.checkNotNullParameter(applyUpdate, "$this$applyUpdate");
                applyUpdate.a = this.f8152e.f6627h.f10957v;
                applyUpdate.f10096b = false;
                applyUpdate.f10103i = false;
                break;
            default:
                hl.c applyUpdate2 = (hl.c) obj;
                Intrinsics.checkNotNullParameter(applyUpdate2, "$this$applyUpdate");
                applyUpdate2.a = this.f8152e.f6628i.f();
                applyUpdate2.f10096b = false;
                break;
        }
        return Unit.a;
    }
}

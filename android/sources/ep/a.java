package ep;

import aq.m;
import aq.o;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import rp.x;

/* loaded from: classes3.dex */
public final class a implements o {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Ref.BooleanRef f8184d;

    public a(Ref.BooleanRef booleanRef) {
        this.f8184d = booleanRef;
    }

    @Override // aq.o
    public final m Z(hq.b classId, np.a source) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        Intrinsics.checkNotNullParameter(source, "source");
        if (!Intrinsics.areEqual(classId, x.f17494b)) {
            return null;
        }
        this.f8184d.element = true;
        return null;
    }
}

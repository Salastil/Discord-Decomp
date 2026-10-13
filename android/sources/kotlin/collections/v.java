package kotlin.collections;

import java.util.Iterator;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public final class v implements Iterable, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13522d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f13523e;

    public /* synthetic */ v(int i5, Object obj) {
        this.f13522d = i5;
        this.f13523e = obj;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        switch (this.f13522d) {
            case 0:
                return ArrayIteratorKt.iterator((Object[]) this.f13523e);
            case 1:
                return new q0((Iterator) ((Function0) this.f13523e).invoke());
            case 2:
                return ((Sequence) this.f13523e).iterator();
            default:
                return new fo.z((bs.b0) this.f13523e);
        }
    }

    public v(Function0 iteratorFactory) {
        this.f13522d = 1;
        Intrinsics.checkNotNullParameter(iteratorFactory, "iteratorFactory");
        this.f13523e = iteratorFactory;
    }
}

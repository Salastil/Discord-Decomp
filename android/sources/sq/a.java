package sq;

import ip.f;
import ip.m;
import kotlin.jvm.internal.Intrinsics;
import yq.y;

/* loaded from: classes3.dex */
public final class a extends bq.b implements d {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f18094i = 1;

    /* renamed from: v, reason: collision with root package name */
    public final hq.e f18095v;

    /* renamed from: w, reason: collision with root package name */
    public final m f18096w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public a(ip.b declarationDescriptor, y receiverType, hq.e eVar) {
        super(receiverType);
        Intrinsics.checkNotNullParameter(declarationDescriptor, "declarationDescriptor");
        Intrinsics.checkNotNullParameter(receiverType, "receiverType");
        this.f18096w = (lp.m) declarationDescriptor;
        this.f18095v = eVar;
    }

    @Override // bq.b
    public final String toString() {
        switch (this.f18094i) {
            case 0:
                return getType() + ": Ctx { " + ((f) this.f18096w) + " }";
            default:
                return "Cxt { " + ((lp.m) this.f18096w) + " }";
        }
    }

    public final hq.e z0() {
        switch (this.f18094i) {
        }
        return this.f18095v;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(f classDescriptor, y receiverType, hq.e eVar) {
        super(receiverType);
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        Intrinsics.checkNotNullParameter(receiverType, "receiverType");
        this.f18096w = classDescriptor;
        this.f18095v = eVar;
    }
}

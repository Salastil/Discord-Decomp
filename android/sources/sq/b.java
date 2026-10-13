package sq;

import lp.m;
import yq.y;

/* loaded from: classes3.dex */
public final class b extends bq.b {

    /* renamed from: i, reason: collision with root package name */
    public final m f18097i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public b(ip.b bVar, y yVar) {
        super(yVar);
        if (yVar == null) {
            throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "receiverType", "kotlin/reflect/jvm/internal/impl/resolve/scopes/receivers/ExtensionReceiver", "<init>"));
        }
        this.f18097i = (m) bVar;
    }

    @Override // bq.b
    public final String toString() {
        return getType() + ": Ext {" + this.f18097i + "}";
    }
}

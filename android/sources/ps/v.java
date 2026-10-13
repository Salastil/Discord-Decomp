package ps;

import java.net.InetSocketAddress;
import java.net.Proxy;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class v {
    public final a a;

    /* renamed from: b, reason: collision with root package name */
    public final Proxy f16600b;

    /* renamed from: c, reason: collision with root package name */
    public final InetSocketAddress f16601c;

    public v(a address, Proxy proxy, InetSocketAddress socketAddress) {
        Intrinsics.checkNotNullParameter(address, "address");
        Intrinsics.checkNotNullParameter(proxy, "proxy");
        Intrinsics.checkNotNullParameter(socketAddress, "socketAddress");
        this.a = address;
        this.f16600b = proxy;
        this.f16601c = socketAddress;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof v)) {
            return false;
        }
        v vVar = (v) obj;
        return Intrinsics.areEqual(vVar.a, this.a) && Intrinsics.areEqual(vVar.f16600b, this.f16600b) && Intrinsics.areEqual(vVar.f16601c, this.f16601c);
    }

    public final int hashCode() {
        return this.f16601c.hashCode() + ((this.f16600b.hashCode() + ((this.a.hashCode() + 527) * 31)) * 31);
    }

    public final String toString() {
        return "Route{" + this.f16601c + '}';
    }
}

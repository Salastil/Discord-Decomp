package ts;

import a5.a0;
import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.Socket;
import java.net.SocketAddress;
import java.net.SocketException;
import java.net.UnknownHostException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.NoSuchElementException;
import kotlin.Unit;
import kotlin.collections.b0;
import kotlin.collections.h0;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Call;
import okhttp3.HttpUrl;
import ps.o;
import ps.v;
import qa.t;

/* loaded from: classes3.dex */
public final class e {
    public final l a;

    /* renamed from: b, reason: collision with root package name */
    public final ps.a f18715b;

    /* renamed from: c, reason: collision with root package name */
    public final h f18716c;

    /* renamed from: d, reason: collision with root package name */
    public a0 f18717d;

    /* renamed from: e, reason: collision with root package name */
    public aj.a f18718e;

    /* renamed from: f, reason: collision with root package name */
    public int f18719f;

    /* renamed from: g, reason: collision with root package name */
    public int f18720g;

    /* renamed from: h, reason: collision with root package name */
    public int f18721h;

    /* renamed from: i, reason: collision with root package name */
    public v f18722i;

    public e(l connectionPool, ps.a address, h call) {
        Intrinsics.checkNotNullParameter(connectionPool, "connectionPool");
        Intrinsics.checkNotNullParameter(address, "address");
        Intrinsics.checkNotNullParameter(call, "call");
        o eventListener = o.f16572d;
        Intrinsics.checkNotNullParameter(eventListener, "eventListener");
        this.a = connectionPool;
        this.f18715b = address;
        this.f18716c = call;
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x0362  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x0361 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:68:0x02f3 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r6v17, types: [java.lang.Object, java.util.List] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final k a(int i5, int i6, int i10, boolean z5, boolean z6) {
        ArrayList arrayList;
        String domainName;
        int i11;
        List list;
        boolean contains;
        t tVar;
        boolean z7;
        Socket k;
        while (!this.f18716c.L) {
            k connection = this.f18716c.F;
            if (connection != null) {
                synchronized (connection) {
                    try {
                        if (!connection.j && b(connection.f18738b.a.f16522h)) {
                            k = null;
                            Unit unit = Unit.a;
                        }
                        k = this.f18716c.k();
                        Unit unit2 = Unit.a;
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                if (this.f18716c.F != null) {
                    if (k != null) {
                        throw new IllegalStateException("Check failed.");
                    }
                    z7 = z6;
                    if (connection.i(z7)) {
                        return connection;
                    }
                    connection.k();
                    if (this.f18722i == null) {
                        a0 a0Var = this.f18717d;
                        if (a0Var == null ? true : a0Var.r()) {
                            continue;
                        } else {
                            aj.a aVar = this.f18718e;
                            if (!(aVar != null ? aVar.k() : true)) {
                                throw new IOException("exhausted all routes");
                            }
                        }
                    }
                } else {
                    if (k != null) {
                        qs.b.d(k);
                    }
                    Intrinsics.checkNotNullParameter(this.f18716c, "call");
                    Intrinsics.checkNotNullParameter(connection, "connection");
                }
            }
            this.f18719f = 0;
            this.f18720g = 0;
            this.f18721h = 0;
            if (this.a.a(this.f18715b, this.f18716c, null, false)) {
                connection = this.f18716c.F;
                Intrinsics.checkNotNull(connection);
                Intrinsics.checkNotNullParameter(this.f18716c, "call");
                Intrinsics.checkNotNullParameter(connection, "connection");
            } else {
                v route = this.f18722i;
                try {
                    if (route != null) {
                        Intrinsics.checkNotNull(route);
                        this.f18722i = null;
                    } else {
                        a0 a0Var2 = this.f18717d;
                        if (a0Var2 != null) {
                            Intrinsics.checkNotNull(a0Var2);
                            if (a0Var2.r()) {
                                a0 a0Var3 = this.f18717d;
                                Intrinsics.checkNotNull(a0Var3);
                                if (!a0Var3.r()) {
                                    throw new NoSuchElementException();
                                }
                                ArrayList arrayList2 = (ArrayList) a0Var3.f125i;
                                int i12 = a0Var3.f124e;
                                a0Var3.f124e = i12 + 1;
                                route = (v) arrayList2.get(i12);
                            }
                        }
                        aj.a aVar2 = this.f18718e;
                        if (aVar2 == null) {
                            ps.a aVar3 = this.f18715b;
                            h hVar = this.f18716c;
                            aVar2 = new aj.a(aVar3, hVar.f18726d.Y, hVar);
                            this.f18718e = aVar2;
                        }
                        if (!aVar2.k()) {
                            throw new NoSuchElementException();
                        }
                        arrayList = new ArrayList();
                        while (aVar2.f635c < ((List) aVar2.f638f).size()) {
                            ps.a aVar4 = (ps.a) aVar2.f634b;
                            if (aVar2.f635c >= ((List) aVar2.f638f).size()) {
                                throw new SocketException("No route to " + aVar4.f16522h.f16034d + "; exhausted proxy configurations: " + ((List) aVar2.f638f));
                            }
                            List list2 = (List) aVar2.f638f;
                            int i13 = aVar2.f635c;
                            aVar2.f635c = i13 + 1;
                            Proxy proxy = (Proxy) list2.get(i13);
                            Call call = (Call) aVar2.f637e;
                            ArrayList arrayList3 = new ArrayList();
                            aVar2.f639g = arrayList3;
                            if (proxy.type() == Proxy.Type.DIRECT || proxy.type() == Proxy.Type.SOCKS) {
                                HttpUrl httpUrl = aVar4.f16522h;
                                domainName = httpUrl.f16034d;
                                i11 = httpUrl.f16035e;
                            } else {
                                SocketAddress proxyAddress = proxy.address();
                                if (!(proxyAddress instanceof InetSocketAddress)) {
                                    throw new IllegalArgumentException(Intrinsics.stringPlus("Proxy.address() is not an InetSocketAddress: ", proxyAddress.getClass()).toString());
                                }
                                Intrinsics.checkNotNullExpressionValue(proxyAddress, "proxyAddress");
                                InetSocketAddress inetSocketAddress = (InetSocketAddress) proxyAddress;
                                Intrinsics.checkNotNullParameter(inetSocketAddress, "<this>");
                                InetAddress address = inetSocketAddress.getAddress();
                                if (address == null) {
                                    domainName = inetSocketAddress.getHostName();
                                    Intrinsics.checkNotNullExpressionValue(domainName, "hostName");
                                } else {
                                    domainName = address.getHostAddress();
                                    Intrinsics.checkNotNullExpressionValue(domainName, "address.hostAddress");
                                }
                                i11 = inetSocketAddress.getPort();
                            }
                            if (1 > i11 || i11 >= 65536) {
                                throw new SocketException("No route to " + domainName + ':' + i11 + "; port is out of range");
                            }
                            if (proxy.type() == Proxy.Type.SOCKS) {
                                arrayList3.add(InetSocketAddress.createUnresolved(domainName, i11));
                            } else {
                                byte[] bArr = qs.b.a;
                                Intrinsics.checkNotNullParameter(domainName, "<this>");
                                if (qs.b.f17055f.d(domainName)) {
                                    list = b0.c(InetAddress.getByName(domainName));
                                } else {
                                    Intrinsics.checkNotNullParameter(call, "call");
                                    Intrinsics.checkNotNullParameter(domainName, "domainName");
                                    List inetAddressList = aVar4.a.lookup(domainName);
                                    if (inetAddressList.isEmpty()) {
                                        throw new UnknownHostException(aVar4.a + " returned no addresses for " + domainName);
                                    }
                                    Intrinsics.checkNotNullParameter(call, "call");
                                    Intrinsics.checkNotNullParameter(domainName, "domainName");
                                    Intrinsics.checkNotNullParameter(inetAddressList, "inetAddressList");
                                    list = inetAddressList;
                                }
                                Iterator it = list.iterator();
                                while (it.hasNext()) {
                                    arrayList3.add(new InetSocketAddress((InetAddress) it.next(), i11));
                                }
                            }
                            Iterator it2 = aVar2.f639g.iterator();
                            while (it2.hasNext()) {
                                v route2 = new v((ps.a) aVar2.f634b, proxy, (InetSocketAddress) it2.next());
                                t tVar2 = (t) aVar2.f636d;
                                synchronized (tVar2) {
                                    Intrinsics.checkNotNullParameter(route2, "route");
                                    contains = ((LinkedHashSet) tVar2.f16718e).contains(route2);
                                }
                                if (contains) {
                                    ((ArrayList) aVar2.f640h).add(route2);
                                } else {
                                    arrayList.add(route2);
                                }
                            }
                            if (!arrayList.isEmpty()) {
                                break;
                            }
                        }
                        if (arrayList.isEmpty()) {
                            h0.o(arrayList, (ArrayList) aVar2.f640h);
                            ((ArrayList) aVar2.f640h).clear();
                        }
                        a0 a0Var4 = new a0(arrayList);
                        this.f18717d = a0Var4;
                        if (this.f18716c.L) {
                            throw new IOException("Canceled");
                        }
                        if (this.a.a(this.f18715b, this.f18716c, arrayList, false)) {
                            connection = this.f18716c.F;
                            Intrinsics.checkNotNull(connection);
                            Intrinsics.checkNotNullParameter(this.f18716c, "call");
                            Intrinsics.checkNotNullParameter(connection, "connection");
                        } else {
                            if (!a0Var4.r()) {
                                throw new NoSuchElementException();
                            }
                            int i14 = a0Var4.f124e;
                            a0Var4.f124e = i14 + 1;
                            route = (v) arrayList.get(i14);
                            k connection2 = new k(this.a, route);
                            this.f18716c.N = connection2;
                            connection2.c(i5, i6, i10, z5, this.f18716c);
                            this.f18716c.N = null;
                            tVar = this.f18716c.f18726d.Y;
                            synchronized (tVar) {
                                Intrinsics.checkNotNullParameter(route, "route");
                                ((LinkedHashSet) tVar.f16718e).remove(route);
                            }
                            if (this.a.a(this.f18715b, this.f18716c, arrayList, true)) {
                                connection = this.f18716c.F;
                                Intrinsics.checkNotNull(connection);
                                this.f18722i = route;
                                Socket socket = connection2.f18740d;
                                Intrinsics.checkNotNull(socket);
                                qs.b.d(socket);
                                Intrinsics.checkNotNullParameter(this.f18716c, "call");
                                Intrinsics.checkNotNullParameter(connection, "connection");
                            } else {
                                synchronized (connection2) {
                                    l lVar = this.a;
                                    lVar.getClass();
                                    Intrinsics.checkNotNullParameter(connection2, "connection");
                                    byte[] bArr2 = qs.b.a;
                                    lVar.f18754d.add(connection2);
                                    lVar.f18752b.c(lVar.f18753c, 0L);
                                    this.f18716c.b(connection2);
                                    Unit unit3 = Unit.a;
                                }
                                Intrinsics.checkNotNullParameter(this.f18716c, "call");
                                Intrinsics.checkNotNullParameter(connection2, "connection");
                                z7 = z6;
                                connection = connection2;
                                if (connection.i(z7)) {
                                }
                            }
                        }
                    }
                    connection2.c(i5, i6, i10, z5, this.f18716c);
                    this.f18716c.N = null;
                    tVar = this.f18716c.f18726d.Y;
                    synchronized (tVar) {
                    }
                } catch (Throwable th3) {
                    this.f18716c.N = null;
                    throw th3;
                }
                arrayList = null;
                k connection22 = new k(this.a, route);
                this.f18716c.N = connection22;
            }
            z7 = z6;
            if (connection.i(z7)) {
            }
        }
        throw new IOException("Canceled");
    }

    public final boolean b(HttpUrl url) {
        Intrinsics.checkNotNullParameter(url, "url");
        HttpUrl httpUrl = this.f18715b.f16522h;
        return url.f16035e == httpUrl.f16035e && Intrinsics.areEqual(url.f16034d, httpUrl.f16034d);
    }

    public final void c(IOException e9) {
        Intrinsics.checkNotNullParameter(e9, "e");
        this.f18722i = null;
        if ((e9 instanceof ws.b0) && ((ws.b0) e9).f20066d == ws.b.REFUSED_STREAM) {
            this.f18719f++;
        } else if (e9 instanceof ws.a) {
            this.f18720g++;
        } else {
            this.f18721h++;
        }
    }
}

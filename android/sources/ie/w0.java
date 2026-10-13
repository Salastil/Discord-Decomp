package ie;

import android.net.Uri;
import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.MulticastSocket;
import java.net.SocketTimeoutException;

/* loaded from: classes3.dex */
public final class w0 extends h {
    public Uri E;
    public DatagramSocket F;
    public MulticastSocket G;
    public InetAddress H;
    public boolean I;
    public int J;

    /* renamed from: w, reason: collision with root package name */
    public final int f10774w;

    /* renamed from: x, reason: collision with root package name */
    public final byte[] f10775x;

    /* renamed from: y, reason: collision with root package name */
    public final DatagramPacket f10776y;

    public w0() {
        super(true);
        this.f10774w = 8000;
        byte[] bArr = new byte[2000];
        this.f10775x = bArr;
        this.f10776y = new DatagramPacket(bArr, 0, 2000);
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        this.E = null;
        MulticastSocket multicastSocket = this.G;
        if (multicastSocket != null) {
            try {
                InetAddress inetAddress = this.H;
                inetAddress.getClass();
                multicastSocket.leaveGroup(inetAddress);
            } catch (IOException unused) {
            }
            this.G = null;
        }
        DatagramSocket datagramSocket = this.F;
        if (datagramSocket != null) {
            datagramSocket.close();
            this.F = null;
        }
        this.H = null;
        this.J = 0;
        if (this.I) {
            this.I = false;
            c();
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final long o(p pVar) {
        Uri uri = pVar.a;
        this.E = uri;
        String host = uri.getHost();
        host.getClass();
        int port = this.E.getPort();
        d();
        try {
            this.H = InetAddress.getByName(host);
            InetSocketAddress inetSocketAddress = new InetSocketAddress(this.H, port);
            if (this.H.isMulticastAddress()) {
                MulticastSocket multicastSocket = new MulticastSocket(inetSocketAddress);
                this.G = multicastSocket;
                multicastSocket.joinGroup(this.H);
                this.F = this.G;
            } else {
                this.F = new DatagramSocket(inetSocketAddress);
            }
            this.F.setSoTimeout(this.f10774w);
            this.I = true;
            e(pVar);
            return -1L;
        } catch (IOException e9) {
            throw new v0(2001, e9);
        } catch (SecurityException e10) {
            throw new v0(2006, e10);
        }
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        if (i6 == 0) {
            return 0;
        }
        int i10 = this.J;
        DatagramPacket datagramPacket = this.f10776y;
        if (i10 == 0) {
            try {
                DatagramSocket datagramSocket = this.F;
                datagramSocket.getClass();
                datagramSocket.receive(datagramPacket);
                int length = datagramPacket.getLength();
                this.J = length;
                b(length);
            } catch (SocketTimeoutException e9) {
                throw new v0(2002, e9);
            } catch (IOException e10) {
                throw new v0(2001, e10);
            }
        }
        int length2 = datagramPacket.getLength();
        int i11 = this.J;
        int min = Math.min(i11, i6);
        System.arraycopy(this.f10775x, length2 - i11, bArr, i5, min);
        this.J -= min;
        return min;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        return this.E;
    }
}

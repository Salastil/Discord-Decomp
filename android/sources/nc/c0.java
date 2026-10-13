package nc;

import android.media.MediaCrypto;
import android.media.MediaCryptoException;
import android.media.MediaDrm;
import android.text.TextUtils;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.charset.Charset;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.UUID;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes3.dex */
public final class c0 implements y {

    /* renamed from: v, reason: collision with root package name */
    public static final n1.k f14998v = new n1.k(6);

    /* renamed from: d, reason: collision with root package name */
    public final UUID f14999d;

    /* renamed from: e, reason: collision with root package name */
    public final MediaDrm f15000e;

    /* renamed from: i, reason: collision with root package name */
    public int f15001i;

    public c0(UUID uuid) {
        uuid.getClass();
        UUID uuid2 = hc.h.f9709b;
        ke.b.f("Use C.CLEARKEY_UUID instead", !uuid2.equals(uuid));
        this.f14999d = uuid;
        MediaDrm mediaDrm = new MediaDrm((ke.d0.a >= 27 || !hc.h.f9710c.equals(uuid)) ? uuid : uuid2);
        this.f15000e = mediaDrm;
        this.f15001i = 1;
        if (hc.h.f9711d.equals(uuid) && "ASUS_Z00AD".equals(ke.d0.f13296d)) {
            mediaDrm.setPropertyString("securityLevel", "L3");
        }
    }

    @Override // nc.y
    public final Map b(byte[] bArr) {
        return this.f15000e.queryKeyStatus(bArr);
    }

    @Override // nc.y
    public final x e() {
        MediaDrm.ProvisionRequest provisionRequest = this.f15000e.getProvisionRequest();
        return new x(provisionRequest.getData(), provisionRequest.getDefaultUrl());
    }

    @Override // nc.y
    public final void g(byte[] bArr, ic.c0 c0Var) {
        if (ke.d0.a >= 31) {
            try {
                b0.b(this.f15000e, bArr, c0Var);
            } catch (UnsupportedOperationException unused) {
                ke.b.N("FrameworkMediaDrm", "setLogSessionId failed.");
            }
        }
    }

    @Override // nc.y
    public final void i(final ha.l lVar) {
        this.f15000e.setOnEventListener(new MediaDrm.OnEventListener() { // from class: nc.a0
            @Override // android.media.MediaDrm.OnEventListener
            public final void onEvent(MediaDrm mediaDrm, byte[] bArr, int i5, int i6, byte[] bArr2) {
                c0 c0Var = c0.this;
                ha.l lVar2 = lVar;
                c0Var.getClass();
                cd.d dVar = ((f) lVar2.f9613d).f15029x;
                dVar.getClass();
                dVar.obtainMessage(i5, bArr).sendToTarget();
            }
        });
    }

    @Override // nc.y
    public final mc.b k(byte[] bArr) {
        int i5 = ke.d0.a;
        UUID uuid = this.f14999d;
        boolean z5 = i5 < 21 && hc.h.f9711d.equals(uuid) && "L3".equals(this.f15000e.getPropertyString("securityLevel"));
        if (i5 < 27 && hc.h.f9710c.equals(uuid)) {
            uuid = hc.h.f9709b;
        }
        return new z(uuid, bArr, z5);
    }

    @Override // nc.y
    public final byte[] m() {
        return this.f15000e.openSession();
    }

    @Override // nc.y
    public final boolean o(byte[] bArr, String str) {
        if (ke.d0.a >= 31) {
            return b0.a(this.f15000e, str);
        }
        try {
            MediaCrypto mediaCrypto = new MediaCrypto(this.f14999d, bArr);
            try {
                return mediaCrypto.requiresSecureDecoderComponent(str);
            } finally {
                mediaCrypto.release();
            }
        } catch (MediaCryptoException unused) {
            return true;
        }
    }

    @Override // nc.y
    public final void p(byte[] bArr, byte[] bArr2) {
        this.f15000e.restoreKeys(bArr, bArr2);
    }

    @Override // nc.y
    public final void q(byte[] bArr) {
        this.f15000e.closeSession(bArr);
    }

    @Override // nc.y
    public final synchronized void release() {
        int i5 = this.f15001i - 1;
        this.f15001i = i5;
        if (i5 == 0) {
            this.f15000e.release();
        }
    }

    @Override // nc.y
    public final byte[] s(byte[] bArr, byte[] bArr2) {
        if (hc.h.f9710c.equals(this.f14999d) && ke.d0.a < 27) {
            try {
                JSONObject jSONObject = new JSONObject(ke.d0.n(bArr2));
                StringBuilder sb2 = new StringBuilder("{\"keys\":[");
                JSONArray jSONArray = jSONObject.getJSONArray("keys");
                for (int i5 = 0; i5 < jSONArray.length(); i5++) {
                    if (i5 != 0) {
                        sb2.append(",");
                    }
                    JSONObject jSONObject2 = jSONArray.getJSONObject(i5);
                    sb2.append("{\"k\":\"");
                    sb2.append(jSONObject2.getString("k").replace('-', '+').replace('_', '/'));
                    sb2.append("\",\"kid\":\"");
                    sb2.append(jSONObject2.getString("kid").replace('-', '+').replace('_', '/'));
                    sb2.append("\",\"kty\":\"");
                    sb2.append(jSONObject2.getString("kty"));
                    sb2.append("\"}");
                }
                sb2.append("]}");
                bArr2 = sb2.toString().getBytes(ei.d.f8100c);
            } catch (JSONException e9) {
                ke.b.s("ClearKeyUtil", "Failed to adjust response data: ".concat(ke.d0.n(bArr2)), e9);
            }
        }
        return this.f15000e.provideKeyResponse(bArr, bArr2);
    }

    @Override // nc.y
    public final void u(byte[] bArr) {
        this.f15000e.provideProvisionResponse(bArr);
    }

    /* JADX WARN: Code restructure failed: missing block: B:27:0x019f, code lost:
    
        if (r5 != null) goto L81;
     */
    /* JADX WARN: Code restructure failed: missing block: B:75:0x0199, code lost:
    
        if ("AFTT".equals(r5) == false) goto L80;
     */
    @Override // nc.y
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final w v(byte[] bArr, List list, int i5, HashMap hashMap) {
        byte[] bArr2;
        String str;
        h hVar;
        byte[] bArr3;
        UUID uuid = this.f14999d;
        h hVar2 = null;
        if (list != null) {
            if (hc.h.f9711d.equals(uuid)) {
                if (ke.d0.a >= 28 && list.size() > 1) {
                    h hVar3 = (h) list.get(0);
                    int i6 = 0;
                    for (int i10 = 0; i10 < list.size(); i10++) {
                        h hVar4 = (h) list.get(i10);
                        byte[] bArr4 = hVar4.f15036w;
                        bArr4.getClass();
                        if (ke.d0.a(hVar4.f15035v, hVar3.f15035v) && ke.d0.a(hVar4.f15034i, hVar3.f15034i) && yc.j.e(bArr4) != null) {
                            i6 += bArr4.length;
                        }
                    }
                    byte[] bArr5 = new byte[i6];
                    int i11 = 0;
                    for (int i12 = 0; i12 < list.size(); i12++) {
                        byte[] bArr6 = ((h) list.get(i12)).f15036w;
                        bArr6.getClass();
                        int length = bArr6.length;
                        System.arraycopy(bArr6, 0, bArr5, i11, length);
                        i11 += length;
                    }
                    hVar = new h(hVar3.f15033e, hVar3.f15034i, hVar3.f15035v, bArr5);
                }
                for (int i13 = 0; i13 < list.size(); i13++) {
                    h hVar5 = (h) list.get(i13);
                    byte[] bArr7 = hVar5.f15036w;
                    bArr7.getClass();
                    a1.d e9 = yc.j.e(bArr7);
                    int i14 = e9 == null ? -1 : e9.f14e;
                    int i15 = ke.d0.a;
                    if ((i15 < 23 && i14 == 0) || (i15 >= 23 && i14 == 1)) {
                        hVar = hVar5;
                        break;
                    }
                }
                hVar = (h) list.get(0);
            } else {
                hVar = (h) list.get(0);
            }
            byte[] bArr8 = hVar.f15036w;
            bArr8.getClass();
            UUID uuid2 = hc.h.f9712e;
            if (uuid2.equals(uuid)) {
                byte[] f2 = yc.j.f(bArr8, uuid);
                if (f2 != null) {
                    bArr8 = f2;
                }
                ke.w wVar = new ke.w(bArr8);
                int i16 = wVar.i();
                short k = wVar.k();
                short k5 = wVar.k();
                if (k == 1 && k5 == 1) {
                    short k7 = wVar.k();
                    Charset charset = ei.d.f8102e;
                    String s2 = wVar.s(k7, charset);
                    if (!s2.contains("<LA_URL>")) {
                        int indexOf = s2.indexOf("</DATA>");
                        if (indexOf == -1) {
                            ke.b.N("FrameworkMediaDrm", "Could not find the </DATA> tag. Skipping LA_URL workaround.");
                        }
                        String str2 = s2.substring(0, indexOf) + "<LA_URL>https://x</LA_URL>" + s2.substring(indexOf);
                        int i17 = i16 + 52;
                        ByteBuffer allocate = ByteBuffer.allocate(i17);
                        allocate.order(ByteOrder.LITTLE_ENDIAN);
                        allocate.putInt(i17);
                        allocate.putShort(k);
                        allocate.putShort(k5);
                        allocate.putShort((short) (str2.length() * 2));
                        allocate.put(str2.getBytes(charset));
                        bArr8 = allocate.array();
                    }
                } else {
                    ke.b.y("FrameworkMediaDrm", "Unexpected record count or type. Skipping LA_URL workaround.");
                }
                bArr8 = yc.j.a(uuid2, null, bArr8);
            }
            int i18 = ke.d0.a;
            if (i18 >= 23 || !hc.h.f9711d.equals(uuid)) {
                if (uuid2.equals(uuid) && "Amazon".equals(ke.d0.f13295c)) {
                    String str3 = ke.d0.f13296d;
                    if (!"AFTB".equals(str3)) {
                        if (!"AFTS".equals(str3)) {
                            if (!"AFTM".equals(str3)) {
                            }
                        }
                    }
                }
                bArr3 = bArr8;
                String str4 = hVar.f15035v;
                str = (i18 < 26 && hc.h.f9710c.equals(uuid) && ("video/mp4".equals(str4) || "audio/mp4".equals(str4))) ? "cenc" : str4;
                bArr2 = bArr3;
                hVar2 = hVar;
            }
            bArr3 = yc.j.f(bArr8, uuid);
        } else {
            bArr2 = null;
            str = null;
        }
        MediaDrm.KeyRequest keyRequest = this.f15000e.getKeyRequest(bArr, bArr2, str, i5, hashMap);
        byte[] data = keyRequest.getData();
        if (hc.h.f9710c.equals(uuid) && ke.d0.a < 27) {
            data = ke.d0.n(data).replace('+', '-').replace('/', '_').getBytes(ei.d.f8100c);
        }
        String defaultUrl = keyRequest.getDefaultUrl();
        if ("<LA_URL>https://x</LA_URL>".equals(defaultUrl) || (ke.d0.a == 33 && "https://default.url".equals(defaultUrl))) {
            defaultUrl = "";
        }
        if (TextUtils.isEmpty(defaultUrl) && hVar2 != null) {
            String str5 = hVar2.f15034i;
            if (!TextUtils.isEmpty(str5)) {
                defaultUrl = str5;
            }
        }
        if (ke.d0.a >= 23) {
            keyRequest.getRequestType();
        }
        return new w(data, defaultUrl);
    }

    @Override // nc.y
    public final int x() {
        return 2;
    }
}

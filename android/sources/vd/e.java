package vd;

import android.util.Base64;
import java.util.UUID;
import org.xmlpull.v1.XmlPullParser;
import yc.j;
import yc.p;

/* loaded from: classes3.dex */
public final class e extends d {

    /* renamed from: f, reason: collision with root package name */
    public boolean f19361f;

    /* renamed from: g, reason: collision with root package name */
    public UUID f19362g;

    /* renamed from: h, reason: collision with root package name */
    public byte[] f19363h;

    @Override // vd.d
    public final Object b() {
        UUID uuid = this.f19362g;
        byte[] a = j.a(uuid, null, this.f19363h);
        byte[] bArr = this.f19363h;
        StringBuilder sb2 = new StringBuilder();
        for (int i5 = 0; i5 < bArr.length; i5 += 2) {
            sb2.append((char) bArr[i5]);
        }
        String sb3 = sb2.toString();
        byte[] decode = Base64.decode(sb3.substring(sb3.indexOf("<KID>") + 5, sb3.indexOf("</KID>")), 0);
        byte b10 = decode[0];
        decode[0] = decode[3];
        decode[3] = b10;
        byte b11 = decode[1];
        decode[1] = decode[2];
        decode[2] = b11;
        byte b12 = decode[4];
        decode[4] = decode[5];
        decode[5] = b12;
        byte b13 = decode[6];
        decode[6] = decode[7];
        decode[7] = b13;
        return new a(uuid, a, new p[]{new p(true, null, 8, decode, 0, 0, null)});
    }

    @Override // vd.d
    public final boolean d(String str) {
        return "ProtectionHeader".equals(str);
    }

    @Override // vd.d
    public final void f(XmlPullParser xmlPullParser) {
        if ("ProtectionHeader".equals(xmlPullParser.getName())) {
            this.f19361f = false;
        }
    }

    @Override // vd.d
    public final void j(XmlPullParser xmlPullParser) {
        if ("ProtectionHeader".equals(xmlPullParser.getName())) {
            this.f19361f = true;
            String attributeValue = xmlPullParser.getAttributeValue(null, "SystemID");
            if (attributeValue.charAt(0) == '{' && attributeValue.charAt(attributeValue.length() - 1) == '}') {
                attributeValue = attributeValue.substring(1, attributeValue.length() - 1);
            }
            this.f19362g = UUID.fromString(attributeValue);
        }
    }

    @Override // vd.d
    public final void k(XmlPullParser xmlPullParser) {
        if (this.f19361f) {
            this.f19363h = Base64.decode(xmlPullParser.getText(), 0);
        }
    }
}

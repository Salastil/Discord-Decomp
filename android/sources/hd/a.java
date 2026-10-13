package hd;

import com.google.android.exoplayer2.metadata.Metadata;
import ei.d;
import java.nio.ByteBuffer;
import java.nio.charset.CharacterCodingException;
import java.nio.charset.CharsetDecoder;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import tn.g;

/* loaded from: classes3.dex */
public final class a extends nt.a {

    /* renamed from: c, reason: collision with root package name */
    public static final Pattern f9948c = Pattern.compile("(.+?)='(.*?)';", 32);
    public final CharsetDecoder a = d.f8100c.newDecoder();

    /* renamed from: b, reason: collision with root package name */
    public final CharsetDecoder f9949b = d.f8099b.newDecoder();

    @Override // nt.a
    public final Metadata m(dd.d dVar, ByteBuffer byteBuffer) {
        String str;
        CharsetDecoder charsetDecoder = this.f9949b;
        CharsetDecoder charsetDecoder2 = this.a;
        String str2 = null;
        try {
            str = charsetDecoder2.decode(byteBuffer).toString();
        } catch (CharacterCodingException unused) {
            try {
                String charBuffer = charsetDecoder.decode(byteBuffer).toString();
                charsetDecoder.reset();
                byteBuffer.rewind();
                str = charBuffer;
            } catch (CharacterCodingException unused2) {
                charsetDecoder.reset();
                byteBuffer.rewind();
                str = null;
            } catch (Throwable th2) {
                charsetDecoder.reset();
                byteBuffer.rewind();
                throw th2;
            }
        } finally {
            charsetDecoder2.reset();
            byteBuffer.rewind();
        }
        byte[] bArr = new byte[byteBuffer.limit()];
        byteBuffer.get(bArr);
        if (str == null) {
            return new Metadata(new c(null, null, bArr));
        }
        Matcher matcher = f9948c.matcher(str);
        String str3 = null;
        for (int i5 = 0; matcher.find(i5); i5 = matcher.end()) {
            String group = matcher.group(1);
            String group2 = matcher.group(2);
            if (group != null) {
                String x5 = g.x(group);
                x5.getClass();
                if (x5.equals("streamurl")) {
                    str3 = group2;
                } else if (x5.equals("streamtitle")) {
                    str2 = group2;
                }
            }
        }
        return new Metadata(new c(str2, str3, bArr));
    }
}

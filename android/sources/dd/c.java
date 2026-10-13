package dd;

import com.google.android.exoplayer2.Format;
import id.i;

/* loaded from: classes3.dex */
public final class c {
    public static final c a = new c();

    public final nt.a a(Format format) {
        String str = format.I;
        if (str != null) {
            switch (str) {
                case "application/vnd.dvb.ait":
                    return new ed.b(0);
                case "application/x-icy":
                    return new hd.a();
                case "application/id3":
                    return new i(null);
                case "application/x-emsg":
                    return new ed.b(1);
                case "application/x-scte35":
                    return new kd.c();
            }
        }
        throw new IllegalArgumentException(a3.e.k("Attempted to create decoder for unsupported MIME type: ", str));
    }

    public final boolean b(Format format) {
        String str = format.I;
        return "application/id3".equals(str) || "application/x-emsg".equals(str) || "application/x-scte35".equals(str) || "application/x-icy".equals(str) || "application/vnd.dvb.ait".equals(str);
    }
}

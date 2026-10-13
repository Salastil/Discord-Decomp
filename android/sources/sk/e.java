package sk;

import android.media.MediaCodec;
import android.media.MediaFormat;
import s4.h;

/* loaded from: classes3.dex */
public final class e extends d {

    /* renamed from: e, reason: collision with root package name */
    public final int f18044e;

    /* renamed from: i, reason: collision with root package name */
    public final MediaFormat f18045i;

    public e(int i5, MediaFormat mediaFormat, Exception exc) {
        super(exc);
        this.f18044e = i5;
        this.f18045i = mediaFormat;
    }

    @Override // java.lang.Throwable
    public final String getMessage() {
        switch (this.f18044e) {
            case 1:
                return "Failed to create decoder codec.";
            case 2:
                return "Failed to configure decoder codec.";
            case 3:
                return "Failed to create encoder codec.";
            case 4:
                return "Failed to configure encoder codec.";
            case 5:
                return "No decoder found.";
            case 6:
                return "No encoder found.";
            case 7:
                return "Codecs are in released state.";
            case 8:
                return "Mime type not found for the source track.";
            case 9:
                return "No tracks found.";
            case 10:
                return "Internal codec error occurred.";
            case 11:
                return "No frame available for specified tag";
            case 12:
                return "Decoder is not provided";
            case 13:
                return "Encoder is not provided";
            case 14:
                return "Renderer is not provided";
            default:
                throw null;
        }
    }

    @Override // sk.d, java.lang.Throwable
    public final String toString() {
        String h6 = h.h(new StringBuilder(), super.toString(), '\n');
        MediaFormat mediaFormat = this.f18045i;
        if (mediaFormat != null) {
            StringBuilder p3 = k0.d.p(h6, "Media format: ");
            p3.append(mediaFormat.toString());
            p3.append('\n');
            h6 = p3.toString();
        }
        if (getCause() == null) {
            return h6;
        }
        StringBuilder p5 = k0.d.p(h6, "Diagnostic info: ");
        Throwable cause = getCause();
        p5.append(!(cause instanceof MediaCodec.CodecException) ? null : ((MediaCodec.CodecException) cause).getDiagnosticInfo());
        return p5.toString();
    }
}

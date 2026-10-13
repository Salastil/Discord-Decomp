package rk;

import android.media.MediaCodec;
import android.media.MediaFormat;
import org.webrtc.MediaStreamTrack;
import sk.e;

/* loaded from: classes3.dex */
public final class b {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public MediaCodec f17403b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f17404c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f17405d;

    /* renamed from: e, reason: collision with root package name */
    public final MediaCodec.BufferInfo f17406e;

    public b(int i5) {
        this.a = i5;
        switch (i5) {
            case 1:
                this.f17404c = true;
                this.f17406e = new MediaCodec.BufferInfo();
                break;
            default:
                this.f17406e = new MediaCodec.BufferInfo();
                break;
        }
    }

    public void a(MediaFormat mediaFormat) {
        if (mediaFormat.containsKey("mime") && mediaFormat.getString("mime").startsWith(MediaStreamTrack.VIDEO_TRACK_KIND)) {
            if (!mediaFormat.containsKey("color-format")) {
                mediaFormat.setInteger("color-format", 2130708361);
            }
            if (!mediaFormat.containsKey("frame-rate")) {
                mediaFormat.setInteger("frame-rate", 30);
            }
        }
        this.f17403b = yk.a.c(mediaFormat, null, true, 6, 3, 4);
        this.f17404c = false;
    }

    public void b(a aVar) {
        MediaCodec mediaCodec = this.f17403b;
        int i5 = aVar.a;
        MediaCodec.BufferInfo bufferInfo = aVar.f17402c;
        mediaCodec.queueInputBuffer(i5, bufferInfo.offset, bufferInfo.size, bufferInfo.presentationTimeUs, bufferInfo.flags);
    }

    public final void c() {
        switch (this.a) {
            case 0:
                MediaCodec mediaCodec = this.f17403b;
                if (mediaCodec == null) {
                    throw new IllegalStateException("Codec is not initialized");
                }
                if (this.f17404c) {
                    return;
                }
                try {
                    mediaCodec.start();
                    this.f17404c = true;
                    return;
                } catch (Exception e9) {
                    throw new e(10, null, e9);
                }
            default:
                try {
                    if (this.f17405d) {
                        return;
                    }
                    this.f17403b.start();
                    this.f17405d = true;
                    return;
                } catch (Exception e10) {
                    throw new e(10, null, e10);
                }
        }
    }
}

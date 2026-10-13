package vk;

import android.content.Context;
import android.media.MediaCodec;
import android.media.MediaFormat;
import android.media.MediaMuxer;
import android.net.Uri;
import android.os.Build;
import android.os.ParcelFileDescriptor;
import android.util.Log;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.util.LinkedList;

/* loaded from: classes3.dex */
public final class b {
    public LinkedList a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f19446b;

    /* renamed from: c, reason: collision with root package name */
    public MediaMuxer f19447c;

    /* renamed from: d, reason: collision with root package name */
    public MediaFormat[] f19448d;

    /* renamed from: e, reason: collision with root package name */
    public ParcelFileDescriptor f19449e;

    /* renamed from: f, reason: collision with root package name */
    public int f19450f;

    /* renamed from: g, reason: collision with root package name */
    public int f19451g;

    public b(Context context, Uri uri, int i5, int i6, int i10) {
        MediaMuxer mediaMuxer;
        try {
            if (Build.VERSION.SDK_INT >= 26) {
                ParcelFileDescriptor openFileDescriptor = context.getContentResolver().openFileDescriptor(uri, "rwt");
                this.f19449e = openFileDescriptor;
                if (openFileDescriptor == null) {
                    throw new IOException("Inaccessible URI " + uri);
                }
                mediaMuxer = io.sentry.android.replay.screenshot.a.b(this.f19449e.getFileDescriptor(), i10);
            } else {
                if (!"file".equalsIgnoreCase(uri.getScheme()) || uri.getPath() == null) {
                    throw new sk.c(3, uri, i10, new Throwable());
                }
                mediaMuxer = new MediaMuxer(uri.getPath(), i10);
            }
            b(mediaMuxer, i5, i6);
        } catch (IOException e9) {
            try {
                ParcelFileDescriptor parcelFileDescriptor = this.f19449e;
                if (parcelFileDescriptor != null) {
                    parcelFileDescriptor.close();
                    this.f19449e = null;
                }
            } catch (IOException unused) {
            }
            throw new sk.c(2, uri, i10, e9);
        } catch (IllegalArgumentException e10) {
            throw new sk.c(1, uri, i10, e10);
        }
    }

    public final int a(MediaFormat mediaFormat, int i5) {
        this.f19448d[i5] = mediaFormat;
        int i6 = this.f19450f + 1;
        this.f19450f = i6;
        if (i6 == this.f19451g) {
            Log.d("b", "All tracks added, starting MediaMuxer, writing out " + this.a.size() + " queued samples");
            for (MediaFormat mediaFormat2 : this.f19448d) {
                this.f19447c.addTrack(mediaFormat2);
            }
            this.f19447c.start();
            this.f19446b = true;
            while (!this.a.isEmpty()) {
                c cVar = (c) this.a.removeFirst();
                this.f19447c.writeSampleData(cVar.a, cVar.f19452b, cVar.f19453c);
            }
        }
        return i5;
    }

    public final void b(MediaMuxer mediaMuxer, int i5, int i6) {
        this.f19451g = i5;
        this.f19447c = mediaMuxer;
        mediaMuxer.setOrientationHint(i6);
        this.f19450f = 0;
        this.f19446b = false;
        this.a = new LinkedList();
        this.f19448d = new MediaFormat[i5];
    }

    public final void c(int i5, ByteBuffer byteBuffer, MediaCodec.BufferInfo bufferInfo) {
        if (!this.f19446b) {
            this.a.addLast(new c(i5, byteBuffer, bufferInfo));
        } else if (byteBuffer == null) {
            Log.e("b", "Trying to write a null buffer, skipping");
        } else {
            this.f19447c.writeSampleData(i5, byteBuffer, bufferInfo);
        }
    }
}

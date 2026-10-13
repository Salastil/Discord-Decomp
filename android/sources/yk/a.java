package yk;

import android.media.MediaCodec;
import android.media.MediaCodecInfo;
import android.media.MediaCodecList;
import android.media.MediaCrypto;
import android.media.MediaFormat;
import android.os.Build;
import android.view.Surface;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.key_commands.KeyCommandDescriptor;
import f4.e;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.concurrent.Callable;
import org.webrtc.PeerConnection;

/* loaded from: classes3.dex */
public abstract class a {
    static {
        HashMap hashMap = new HashMap();
        int i5 = Build.VERSION.SDK_INT;
        hashMap.put("video/avc", i5 >= 27 ? new int[]{KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT, 1, 4, 2, KeyCommandDescriptor.ModifierFlags.ALTERNATE, 8, 16, 32, 64} : new int[]{1, 4, 2, 8, 16, 32, 64});
        hashMap.put("video/x-vnd.on2.vp8", new int[]{1});
        hashMap.put("video/hevc", i5 >= 29 ? new int[]{1, 2, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT, 8192} : new int[]{1, 2, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT});
        hashMap.put("video/x-vnd.on2.vp9", i5 >= 29 ? new int[]{1, 2, 4, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT, 16384, 8, 8192, PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS} : new int[]{1, 2, 4, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT, 8, 8192});
        if (i5 >= 29) {
            hashMap.put("video/av01", new int[]{1, 2, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT, 8192});
        }
    }

    public static MediaCodec a(MediaFormat mediaFormat, Surface surface, boolean z5, ArrayList arrayList) {
        MediaCodec mediaCodec;
        Exception e9;
        Iterator it = arrayList.iterator();
        MediaCodec mediaCodec2 = null;
        IOException iOException = null;
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            try {
                mediaCodec = (MediaCodec) ((Callable) it.next()).call();
            } catch (Exception e10) {
                mediaCodec = mediaCodec2;
                e9 = e10;
            }
            if (mediaCodec != null) {
                try {
                    mediaCodec.configure(mediaFormat, surface, (MediaCrypto) null, z5 ? 1 : 0);
                    mediaCodec2 = mediaCodec;
                    break;
                } catch (Exception e11) {
                    e9 = e11;
                    if (mediaCodec != null) {
                        mediaCodec.release();
                        mediaCodec = null;
                    }
                    if (e9 instanceof IOException) {
                        iOException = (IOException) e9;
                    }
                    mediaCodec2 = mediaCodec;
                }
            } else {
                continue;
                mediaCodec2 = mediaCodec;
            }
        }
        if (mediaCodec2 != null) {
            return mediaCodec2;
        }
        if (iOException != null) {
            throw iOException;
        }
        throw new IllegalStateException();
    }

    public static ArrayList b(boolean z5, String str, MediaFormat mediaFormat) {
        ArrayList arrayList = new ArrayList();
        for (MediaCodecInfo mediaCodecInfo : new MediaCodecList(1).getCodecInfos()) {
            if (mediaCodecInfo.isEncoder() == z5) {
                try {
                    MediaCodecInfo.CodecCapabilities capabilitiesForType = mediaCodecInfo.getCapabilitiesForType(str);
                    if (capabilitiesForType != null && (mediaFormat == null || capabilitiesForType.isFormatSupported(mediaFormat))) {
                        arrayList.add(new e(3, mediaCodecInfo));
                    }
                } catch (IllegalArgumentException unused) {
                }
            }
        }
        return arrayList;
    }

    public static MediaCodec c(MediaFormat mediaFormat, Surface surface, boolean z5, int i5, int i6, int i10) {
        try {
            try {
                ArrayList b10 = b(z5, mediaFormat.getString("mime"), mediaFormat);
                MediaCodec a = !b10.isEmpty() ? a(mediaFormat, surface, z5, b10) : null;
                if (a != null) {
                    return a;
                }
                throw new IllegalStateException("Try fallbackToGetCodecByType");
            } catch (IOException | IllegalStateException unused) {
                ArrayList b11 = b(z5, mediaFormat.getString("mime"), null);
                MediaCodec a10 = !b11.isEmpty() ? a(mediaFormat, surface, z5, b11) : null;
                if (a10 != null) {
                    return a10;
                }
                throw new sk.e(i5, mediaFormat, null);
            }
        } catch (IOException | IllegalStateException e9) {
            if (e9 instanceof IOException) {
                throw new sk.e(i6, mediaFormat, e9);
            }
            throw new sk.e(i10, mediaFormat, e9);
        }
    }
}

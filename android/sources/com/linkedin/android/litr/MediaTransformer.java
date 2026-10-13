package com.linkedin.android.litr;

import ah.d;
import android.content.Context;
import android.media.MediaFormat;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Log;
import com.discord.media.utils.Transcoder$convertCompress$3$2;
import com.google.firebase.messaging.r;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import kotlin.jvm.internal.Intrinsics;
import org.webrtc.MediaStreamTrack;
import pk.b;
import s4.h;
import vk.a;
import wk.e;

/* loaded from: classes3.dex */
public final class MediaTransformer {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final ExecutorService f6514b;

    /* renamed from: c, reason: collision with root package name */
    public final Looper f6515c;

    /* renamed from: d, reason: collision with root package name */
    public final HashMap f6516d;

    public MediaTransformer(Context context) {
        Looper mainLooper = Looper.getMainLooper();
        ExecutorService newSingleThreadExecutor = Executors.newSingleThreadExecutor();
        this.a = context.getApplicationContext();
        this.f6516d = new HashMap(10);
        this.f6515c = mainLooper;
        this.f6514b = newSingleThreadExecutor;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0075 A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean a(a aVar, int i5, String str) {
        MediaFormat trackFormat;
        if (str != null) {
            trackFormat = aVar.getTrackFormat(i5);
            switch (str) {
                case "video/hevc":
                case "video/avc":
                    if (trackFormat.containsKey("mime") && TextUtils.equals(trackFormat.getString("mime"), "audio/raw")) {
                        return true;
                    }
                    break;
                case "video/x-vnd.on2.vp8":
                case "video/x-vnd.on2.vp9":
                    if (!trackFormat.containsKey("mime") || TextUtils.equals(trackFormat.getString("mime"), "audio/opus") || TextUtils.equals(trackFormat.getString("mime"), "audio/vorbis")) {
                    }
                    break;
            }
        }
        return false;
    }

    public static boolean b(String str, boolean z5) {
        if (str != null) {
            return !z5 || str.startsWith(MediaStreamTrack.VIDEO_TRACK_KIND) || str.startsWith(MediaStreamTrack.AUDIO_TRACK_KIND);
        }
        Log.e("MediaTransformer", "Mime type is null for track ");
        return false;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r12v4, types: [java.lang.Number] */
    public final void c(String str, ArrayList arrayList, Transcoder$convertCompress$3$2 transcoder$convertCompress$3$2, int i5) {
        String str2;
        int i6;
        e eVar;
        MediaFormat mediaFormat;
        MediaFormat createAudioFormat;
        String str3;
        HashMap hashMap = this.f6516d;
        if (hashMap.containsKey(str)) {
            throw new IllegalArgumentException(h.f("Request with id ", str, " already exists"));
        }
        int size = arrayList.size();
        int i10 = 0;
        while (true) {
            if (i10 >= size) {
                str2 = null;
                break;
            }
            pk.a aVar = (pk.a) arrayList.get(i10);
            MediaFormat trackFormat = aVar.a.getTrackFormat(aVar.f16415g);
            MediaFormat mediaFormat2 = aVar.f16414f;
            if (mediaFormat2 == null || !mediaFormat2.containsKey("mime") || !mediaFormat2.getString("mime").startsWith(MediaStreamTrack.VIDEO_TRACK_KIND)) {
                if (trackFormat.containsKey("mime") && trackFormat.getString("mime").startsWith(MediaStreamTrack.VIDEO_TRACK_KIND)) {
                    str2 = trackFormat.getString("mime");
                    break;
                }
                i10++;
            } else {
                str2 = mediaFormat2.getString("mime");
                break;
            }
        }
        int i11 = 0;
        while (i11 < size) {
            pk.a aVar2 = (pk.a) arrayList.get(i11);
            MediaFormat mediaFormat3 = aVar2.f16414f;
            a aVar3 = aVar2.a;
            int i12 = aVar2.f16415g;
            if (mediaFormat3 != null || (((eVar = aVar2.f16411c) == null || !eVar.a()) && !a(aVar3, i12, str2))) {
                i6 = size;
            } else {
                MediaFormat format = aVar3.getTrackFormat(i12);
                String string = format.containsKey("mime") ? format.getString("mime") : null;
                if (string != null) {
                    if (string.startsWith(MediaStreamTrack.VIDEO_TRACK_KIND)) {
                        i6 = size;
                        createAudioFormat = MediaFormat.createVideoFormat(string, format.getInteger("width"), format.getInteger("height"));
                        int m5 = d9.a.m(aVar3, i12);
                        if (m5 <= 0) {
                            m5 = 10000000;
                        }
                        createAudioFormat.setInteger("bitrate", m5);
                        createAudioFormat.setInteger("i-frame-interval", format.containsKey("i-frame-interval") ? format.getInteger("i-frame-interval") : 5);
                        Intrinsics.checkNotNullParameter(format, "format");
                        Intrinsics.checkNotNullParameter(defaultValue, "defaultValue");
                        ?? c6 = d.c(format, "frame-rate");
                        defaultValue = c6 != 0 ? c6 : 30;
                        createAudioFormat.setInteger("frame-rate", defaultValue.intValue());
                    } else {
                        i6 = size;
                        if (string.startsWith(MediaStreamTrack.AUDIO_TRACK_KIND)) {
                            if (a(aVar3, i12, str2)) {
                                str2.getClass();
                                switch (str2) {
                                    case "video/hevc":
                                    case "video/avc":
                                        str3 = "audio/mp4a-latm";
                                        string = str3;
                                        break;
                                    case "video/x-vnd.on2.vp8":
                                    case "video/x-vnd.on2.vp9":
                                        str3 = "audio/opus";
                                        string = str3;
                                        break;
                                    default:
                                        string = null;
                                        break;
                                }
                            }
                            createAudioFormat = MediaFormat.createAudioFormat(string, format.getInteger("sample-rate"), format.getInteger("channel-count"));
                            createAudioFormat.setInteger("bitrate", format.containsKey("bitrate") ? format.getInteger("bitrate") : 256000);
                            if (format.containsKey("durationUs")) {
                                createAudioFormat.setLong("durationUs", format.getLong("durationUs"));
                            }
                        }
                    }
                    mediaFormat = createAudioFormat;
                    arrayList.set(i11, new pk.a(aVar2.f16415g, aVar2.f16416h, mediaFormat, aVar2.f16410b, aVar2.f16412d, aVar3, aVar2.f16413e, aVar2.f16411c));
                } else {
                    i6 = size;
                }
                mediaFormat = null;
                arrayList.set(i11, new pk.a(aVar2.f16415g, aVar2.f16416h, mediaFormat, aVar2.f16410b, aVar2.f16412d, aVar3, aVar2.f16413e, aVar2.f16411c));
            }
            i11++;
            size = i6;
        }
        hashMap.put(str, this.f6514b.submit(new b(str, arrayList, i5, new r(hashMap, transcoder$convertCompress$3$2, this.f6515c))));
    }
}

package com.discord.media.utils;

import a5.a0;
import android.content.Context;
import android.media.MediaFormat;
import android.net.Uri;
import android.text.TextUtils;
import com.discord.media.utils.DiscordVideoMediaSource;
import com.linkedin.android.litr.MediaTransformer;
import com.linkedin.android.litr.io.MediaRange;
import fo.q;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CancellationException;
import java.util.concurrent.Future;
import ko.f;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CancellableContinuation;
import nr.j;
import org.jetbrains.annotations.NotNull;
import org.webrtc.MediaStreamTrack;
import pk.c;
import vk.b;
import wk.d;
import wk.e;

@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010%\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0007\n\u0002\b\u0002\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\t\u001a\u00020\b2\u0006\u0010\n\u001a\u00020\u0006JL\u0010\u000b\u001a\u00020\f2\u0006\u0010\n\u001a\u00020\u00062\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\u00132\u0014\b\u0002\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\u0016\u0012\u0004\u0012\u00020\b0\u0015H\u0086@¢\u0006\u0002\u0010\u0017R \u0010\u0004\u001a\u0014\u0012\u0004\u0012\u00020\u0006\u0012\n\u0012\b\u0012\u0004\u0012\u00020\b0\u00070\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0018"}, d2 = {"Lcom/discord/media/utils/Transcoder;", "", "<init>", "()V", "cancelCallbacks", "", "", "Lkotlin/Function0;", "", "cancel", "requestId", "convertCompress", "Landroid/net/Uri;", "context", "Landroid/content/Context;", "mediaSource", "Lcom/discord/media/utils/DiscordVideoMediaSource;", "outputUri", "encodingConfig", "Lcom/discord/media/utils/EncodingConfig;", "onProgress", "Lkotlin/Function1;", "", "(Ljava/lang/String;Landroid/content/Context;Lcom/discord/media/utils/DiscordVideoMediaSource;Landroid/net/Uri;Lcom/discord/media/utils/EncodingConfig;Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "media_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nTranscoder.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Transcoder.kt\ncom/discord/media/utils/Transcoder\n+ 2 CancellableContinuation.kt\nkotlinx/coroutines/CancellableContinuationKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,104:1\n426#2,9:105\n435#2,2:115\n1#3:114\n*S KotlinDebug\n*F\n+ 1 Transcoder.kt\ncom/discord/media/utils/Transcoder\n*L\n28#1:105,9\n28#1:115,2\n*E\n"})
/* loaded from: classes.dex */
public final class Transcoder {

    @NotNull
    public static final Transcoder INSTANCE = new Transcoder();

    @NotNull
    private static final Map<String, Function0<Unit>> cancelCallbacks = new LinkedHashMap();

    private Transcoder() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit convertCompress$lambda$0(float f2) {
        return Unit.a;
    }

    public final void cancel(@NotNull String requestId) {
        Intrinsics.checkNotNullParameter(requestId, "requestId");
        Function0<Unit> remove = cancelCallbacks.remove(requestId);
        if (remove != null) {
            remove.invoke();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0219  */
    /* JADX WARN: Type inference failed for: r1v18, types: [com.discord.media.utils.Transcoder$convertCompress$3$2, pk.c] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object convertCompress(@NotNull final String str, @NotNull Context context, @NotNull DiscordVideoMediaSource discordVideoMediaSource, @NotNull final Uri uri, @NotNull EncodingConfig encodingConfig, @NotNull final Function1<? super Float, Unit> function1, @NotNull Continuation frame) {
        Object r5;
        vk.a aVar;
        int i5;
        int i6;
        int i10;
        MediaFormat mediaFormat;
        b bVar;
        rk.b bVar2;
        MediaFormat mediaFormat2;
        rk.b bVar3;
        e eVar;
        vk.a aVar2;
        int i11;
        ArrayList arrayList;
        int i12;
        boolean z5 = true;
        final j jVar = new j(1, f.b(frame));
        jVar.t();
        final MediaTransformer mediaTransformer = new MediaTransformer(context);
        cancelCallbacks.put(str, new Function0<Unit>() { // from class: com.discord.media.utils.Transcoder$convertCompress$3$1
            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m1025invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m1025invoke() {
                MediaTransformer mediaTransformer2 = MediaTransformer.this;
                Future future = (Future) mediaTransformer2.f6516d.get(str);
                if (future == null || future.isCancelled() || future.isDone()) {
                    return;
                }
                future.cancel(true);
            }
        });
        MediaFormat mediaFormat3 = new MediaFormat();
        mediaFormat3.setString("mime", "video/avc");
        mediaFormat3.setInteger("width", encodingConfig.getTargetWidth());
        mediaFormat3.setInteger("height", encodingConfig.getTargetHeight());
        mediaFormat3.setInteger("bitrate", encodingConfig.getTargetBitrate().intValue());
        mediaFormat3.setFloat("frame-rate", encodingConfig.getFrameRate().floatValue());
        mediaFormat3.setFloat("operating-rate", encodingConfig.getFrameRate().floatValue());
        mediaFormat3.setFloat("i-frame-interval", encodingConfig.getKeyFrameIntervalSeconds().floatValue());
        mediaFormat3.setInteger("rotation-degrees", encodingConfig.getRotationDegrees().intValue());
        mediaFormat3.setInteger("priority", 1);
        DiscordVideoMediaSource.ColorFormatSettings colorFormatSettings = discordVideoMediaSource.getColorFormatSettings();
        if (colorFormatSettings != null) {
            Integer colorTransfer = colorFormatSettings.getColorTransfer();
            if (colorTransfer != null) {
                mediaFormat3.setInteger("color-transfer", colorTransfer.intValue());
            }
            Integer colorStandard = colorFormatSettings.getColorStandard();
            if (colorStandard != null) {
                mediaFormat3.setInteger("color-standard", colorStandard.intValue());
            }
            Integer colorRange = colorFormatSettings.getColorRange();
            if (colorRange != null) {
                mediaFormat3.setInteger("color-range", colorRange.intValue());
            }
            ByteBuffer hdrStaticInfo = colorFormatSettings.getHdrStaticInfo();
            if (hdrStaticInfo != null) {
                mediaFormat3.setByteBuffer("hdr-static-info", hdrStaticInfo);
            }
        }
        a0 a0Var = new a0(encodingConfig.getProgressUpdateGranularity(), true);
        Intrinsics.checkNotNullExpressionValue(a0Var, "build(...)");
        Uri inputUri = discordVideoMediaSource.getInputUri();
        MediaFormat audioFormat = discordVideoMediaSource.getAudioFormat();
        ?? r12 = new c() { // from class: com.discord.media.utils.Transcoder$convertCompress$3$2
            @Override // pk.c
            public void onCancelled(String id2, List<qk.a> infos) {
                Intrinsics.checkNotNullParameter(id2, "id");
                mediaTransformer.f6514b.shutdownNow();
                Transcoder.cancelCallbacks.remove(str);
                if (jVar.c()) {
                    CancellableContinuation cancellableContinuation = jVar;
                    q qVar = Result.f13476e;
                    cancellableContinuation.resumeWith(ki.b.i(new CancellationException("Video transcoding was cancelled")));
                }
            }

            @Override // pk.c
            public void onCompleted(String id2, List<qk.a> infos) {
                Intrinsics.checkNotNullParameter(id2, "id");
                mediaTransformer.f6514b.shutdownNow();
                function1.invoke(Float.valueOf(1.0f));
                Transcoder.cancelCallbacks.remove(str);
                CancellableContinuation cancellableContinuation = jVar;
                q qVar = Result.f13476e;
                cancellableContinuation.resumeWith(uri);
            }

            @Override // pk.c
            public void onError(String id2, Throwable cause, List<qk.a> infos) {
                Intrinsics.checkNotNullParameter(id2, "id");
                mediaTransformer.f6514b.shutdownNow();
                Transcoder.cancelCallbacks.remove(str);
                CancellableContinuation cancellableContinuation = jVar;
                q qVar = Result.f13476e;
                if (cause == null) {
                    cause = new Throwable("Unknown transcoding error");
                }
                cancellableContinuation.resumeWith(ki.b.i(cause));
            }

            @Override // pk.c
            public void onProgress(String id2, float progress) {
                Intrinsics.checkNotNullParameter(id2, "id");
                function1.invoke(Float.valueOf(progress));
            }

            @Override // pk.c
            public void onStarted(String id2) {
                Intrinsics.checkNotNullParameter(id2, "id");
                function1.invoke(Float.valueOf(0.0f));
            }
        };
        try {
            aVar = new vk.a(mediaTransformer.a, inputUri, (MediaRange) a0Var.f125i);
            i5 = 0;
            i6 = 0;
            for (int i13 = 0; i13 < aVar.getTrackCount(); i13++) {
                MediaFormat trackFormat = aVar.getTrackFormat(i13);
                if (MediaTransformer.b(trackFormat.containsKey("mime") ? trackFormat.getString("mime") : null, true)) {
                    i6++;
                }
            }
            i10 = (mediaFormat3.containsKey("mime") && (TextUtils.equals(mediaFormat3.getString("mime"), "video/x-vnd.on2.vp9") || TextUtils.equals(mediaFormat3.getString("mime"), "video/x-vnd.on2.vp8"))) ? 1 : 0;
        } catch (sk.b e9) {
            e = e9;
            r12.onError(str, e, null);
            jVar.v(new Function1<Throwable, Unit>() { // from class: com.discord.media.utils.Transcoder$convertCompress$3$3
                @Override // kotlin.jvm.functions.Function1
                public /* bridge */ /* synthetic */ Object invoke(Object obj) {
                    invoke((Throwable) obj);
                    return Unit.a;
                }

                public final void invoke(Throwable th2) {
                    Transcoder.INSTANCE.cancel(str);
                }
            });
            r5 = jVar.r();
            if (r5 == ko.a.f13464d) {
            }
            return r5;
        } catch (sk.c e10) {
            e = e10;
            r12.onError(str, e, null);
            jVar.v(new Function1<Throwable, Unit>() { // from class: com.discord.media.utils.Transcoder$convertCompress$3$3
                @Override // kotlin.jvm.functions.Function1
                public /* bridge */ /* synthetic */ Object invoke(Object obj) {
                    invoke((Throwable) obj);
                    return Unit.a;
                }

                public final void invoke(Throwable th2) {
                    Transcoder.INSTANCE.cancel(str);
                }
            });
            r5 = jVar.r();
            if (r5 == ko.a.f13464d) {
            }
            return r5;
        }
        if (i6 <= 0) {
            throw new sk.c(4, uri, i10, new IllegalArgumentException("No output tracks left"));
        }
        b bVar4 = new b(mediaTransformer.a, uri, i6, aVar.getOrientationHint(), i10);
        int trackCount = aVar.getTrackCount();
        ArrayList arrayList2 = new ArrayList(trackCount);
        while (i5 < trackCount) {
            MediaFormat trackFormat2 = aVar.getTrackFormat(i5);
            String string = trackFormat2.containsKey("mime") ? trackFormat2.getString("mime") : null;
            if (MediaTransformer.b(string, z5)) {
                ArrayList arrayList3 = arrayList2;
                int size = arrayList3.size();
                if (string.startsWith(MediaStreamTrack.VIDEO_TRACK_KIND)) {
                    bVar2 = new rk.b(0);
                    d dVar = new d();
                    mediaFormat = mediaFormat3;
                    bVar3 = new rk.b(1);
                    bVar = bVar4;
                    eVar = dVar;
                    mediaFormat2 = mediaFormat;
                } else {
                    mediaFormat = mediaFormat3;
                    if (string.startsWith(MediaStreamTrack.AUDIO_TRACK_KIND)) {
                        rk.b bVar5 = new rk.b(1);
                        bVar2 = new rk.b(0);
                        bVar3 = bVar5;
                        bVar = bVar4;
                        eVar = new wk.b(bVar5);
                        mediaFormat2 = audioFormat;
                    } else {
                        bVar = bVar4;
                        bVar2 = null;
                        mediaFormat2 = null;
                        bVar3 = null;
                        eVar = null;
                    }
                }
                aVar2 = aVar;
                i11 = trackCount;
                arrayList = arrayList3;
                i12 = i5;
                bVar4 = bVar;
                arrayList.add(new pk.a(i12, size, mediaFormat2, bVar2, bVar3, aVar2, bVar, eVar));
            } else {
                mediaFormat = mediaFormat3;
                aVar2 = aVar;
                i11 = trackCount;
                arrayList = arrayList2;
                i12 = i5;
            }
            i5 = i12 + 1;
            trackCount = i11;
            arrayList2 = arrayList;
            aVar = aVar2;
            mediaFormat3 = mediaFormat;
            z5 = true;
        }
        mediaTransformer.c(str, arrayList2, r12, a0Var.f124e);
        jVar.v(new Function1<Throwable, Unit>() { // from class: com.discord.media.utils.Transcoder$convertCompress$3$3
            @Override // kotlin.jvm.functions.Function1
            public /* bridge */ /* synthetic */ Object invoke(Object obj) {
                invoke((Throwable) obj);
                return Unit.a;
            }

            public final void invoke(Throwable th2) {
                Transcoder.INSTANCE.cancel(str);
            }
        });
        r5 = jVar.r();
        if (r5 == ko.a.f13464d) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5;
    }
}

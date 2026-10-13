package com.discord.media.engine.video;

import com.discord.media.engine.video.AttachedVideoSinks;
import kotlin.Metadata;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import org.webrtc.VideoFrame;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class AttachedVideoSinks$addSink$outputSinks$1$1$1 extends FunctionReferenceImpl implements Function2<VideoFrame, Boolean, Boolean> {
    public AttachedVideoSinks$addSink$outputSinks$1$1$1(Object obj) {
        super(2, obj, AttachedVideoSinks.VideoOutputSinks.class, "onFrame", "onFrame(Lorg/webrtc/VideoFrame;Z)Z", 0);
    }

    public final Boolean invoke(VideoFrame p02, boolean z5) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        return Boolean.valueOf(((AttachedVideoSinks.VideoOutputSinks) this.receiver).onFrame(p02, z5));
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2) {
        return invoke((VideoFrame) obj, ((Boolean) obj2).booleanValue());
    }
}

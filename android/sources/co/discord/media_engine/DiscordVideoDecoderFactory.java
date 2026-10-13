package co.discord.media_engine;

import androidx.annotation.NonNull;
import java.util.Arrays;
import java.util.LinkedHashSet;
import java.util.function.Predicate;
import org.webrtc.EglBase;
import org.webrtc.HardwareVideoDecoderFactory;
import org.webrtc.PlatformSoftwareVideoDecoderFactory;
import org.webrtc.SoftwareVideoDecoderFactory;
import org.webrtc.VideoCodecInfo;
import org.webrtc.VideoDecoder;
import org.webrtc.VideoDecoderFactory;
import org.webrtc.VideoDecoderFallback;

/* loaded from: classes.dex */
public class DiscordVideoDecoderFactory implements VideoDecoderFactory {
    private final VideoDecoderFactory hardwareVideoDecoderFactory;
    private final VideoDecoderFactory platformSoftwareVideoDecoderFactory;
    private final VideoDecoderFactory softwareVideoDecoderFactory = new SoftwareVideoDecoderFactory();

    public DiscordVideoDecoderFactory(EglBase.Context context) {
        this.hardwareVideoDecoderFactory = new HardwareVideoDecoderFactory(context);
        this.platformSoftwareVideoDecoderFactory = new PlatformSoftwareVideoDecoderFactory(context);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ boolean lambda$getSupportedCodecs$0(VideoCodecInfo videoCodecInfo) {
        return videoCodecInfo.name.equals("VP8");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ boolean lambda$getSupportedCodecs$1(VideoCodecInfo videoCodecInfo) {
        return videoCodecInfo.name.equals("H264");
    }

    @Override // org.webrtc.VideoDecoderFactory
    public VideoDecoder createDecoder(@NonNull VideoCodecInfo videoCodecInfo) {
        VideoDecoderFactory videoDecoderFactory;
        VideoDecoder createDecoder = this.softwareVideoDecoderFactory.createDecoder(videoCodecInfo);
        VideoDecoder createDecoder2 = this.hardwareVideoDecoderFactory.createDecoder(videoCodecInfo);
        if (createDecoder == null && (videoDecoderFactory = this.platformSoftwareVideoDecoderFactory) != null) {
            createDecoder = videoDecoderFactory.createDecoder(videoCodecInfo);
        }
        return (createDecoder2 == null || createDecoder == null) ? createDecoder2 != null ? createDecoder2 : createDecoder : new VideoDecoderFallback(createDecoder, createDecoder2);
    }

    @Override // org.webrtc.VideoDecoderFactory
    @NonNull
    public VideoCodecInfo[] getSupportedCodecs() {
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        final int i5 = 0;
        Arrays.stream(this.softwareVideoDecoderFactory.getSupportedCodecs()).filter(new Predicate() { // from class: co.discord.media_engine.a
            @Override // java.util.function.Predicate
            public final boolean test(Object obj) {
                boolean lambda$getSupportedCodecs$0;
                boolean lambda$getSupportedCodecs$1;
                VideoCodecInfo videoCodecInfo = (VideoCodecInfo) obj;
                switch (i5) {
                    case 0:
                        lambda$getSupportedCodecs$0 = DiscordVideoDecoderFactory.lambda$getSupportedCodecs$0(videoCodecInfo);
                        return lambda$getSupportedCodecs$0;
                    default:
                        lambda$getSupportedCodecs$1 = DiscordVideoDecoderFactory.lambda$getSupportedCodecs$1(videoCodecInfo);
                        return lambda$getSupportedCodecs$1;
                }
            }
        }).forEach(new b(0, linkedHashSet));
        linkedHashSet.addAll(Arrays.asList(this.hardwareVideoDecoderFactory.getSupportedCodecs()));
        final int i6 = 1;
        Arrays.stream(this.platformSoftwareVideoDecoderFactory.getSupportedCodecs()).filter(new Predicate() { // from class: co.discord.media_engine.a
            @Override // java.util.function.Predicate
            public final boolean test(Object obj) {
                boolean lambda$getSupportedCodecs$0;
                boolean lambda$getSupportedCodecs$1;
                VideoCodecInfo videoCodecInfo = (VideoCodecInfo) obj;
                switch (i6) {
                    case 0:
                        lambda$getSupportedCodecs$0 = DiscordVideoDecoderFactory.lambda$getSupportedCodecs$0(videoCodecInfo);
                        return lambda$getSupportedCodecs$0;
                    default:
                        lambda$getSupportedCodecs$1 = DiscordVideoDecoderFactory.lambda$getSupportedCodecs$1(videoCodecInfo);
                        return lambda$getSupportedCodecs$1;
                }
            }
        }).forEach(new b(0, linkedHashSet));
        return (VideoCodecInfo[]) linkedHashSet.toArray(new VideoCodecInfo[linkedHashSet.size()]);
    }
}

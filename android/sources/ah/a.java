package ah;

import android.adservices.measurement.MeasurementManager;
import android.content.ClipData;
import android.graphics.Typeface;
import android.graphics.fonts.FontFamily;
import android.media.MediaCodecInfo;
import androidx.arch.core.util.Function;
import androidx.metrics.performance.FrameData;
import androidx.metrics.performance.JankStats;
import co.discord.media_engine.DiscordVideoEncoderFactory;
import com.discord.chat.input.views.ChatInputRootView;
import com.discord.crash_reporting.CrashReporting;
import com.discord.jank_stats.JankStatsAggregator;
import com.discord.networking.ReactNetworking;
import com.discord.react_fork_overrides.forks.CustomFontFamilyOverride;
import com.discord.react_fork_overrides.forks.ImageSourceOverride;
import com.facebook.react.common.assets.CreateTypefaceObject;
import com.facebook.react.modules.network.CustomClientBuilder;
import io.sentry.Breadcrumb;
import io.sentry.Hint;
import io.sentry.g5;
import okhttp3.OkHttpClient;
import org.webrtc.Predicate;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Predicate, androidx.core.util.Predicate, g5, JankStats.OnFrameListener, CustomClientBuilder, Function {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f613d;

    public /* synthetic */ a(int i5) {
        this.f613d = i5;
    }

    public static /* bridge */ /* synthetic */ MeasurementManager c(Object obj) {
        return (MeasurementManager) obj;
    }

    public static /* bridge */ /* synthetic */ FontFamily f(Object obj) {
        return (FontFamily) obj;
    }

    public static /* bridge */ /* synthetic */ Class h() {
        return MeasurementManager.class;
    }

    @Override // androidx.metrics.performance.JankStats.OnFrameListener
    public void a(FrameData frameData) {
        JankStatsAggregator.listener$lambda$0(frameData);
    }

    @Override // androidx.arch.core.util.Function
    public Object apply(Object obj) {
        Typeface override$lambda$0;
        String override$lambda$02;
        switch (this.f613d) {
            case 25:
                override$lambda$0 = CustomFontFamilyOverride.override$lambda$0((CreateTypefaceObject) obj);
                return override$lambda$0;
            default:
                override$lambda$02 = ImageSourceOverride.override$lambda$0((String) obj);
                return override$lambda$02;
        }
    }

    @Override // io.sentry.g5
    public Breadcrumb execute(Breadcrumb breadcrumb, Hint hint) {
        Breadcrumb init$lambda$3$lambda$2;
        init$lambda$3$lambda$2 = CrashReporting.init$lambda$3$lambda$2(breadcrumb, hint);
        return init$lambda$3$lambda$2;
    }

    @Override // org.webrtc.Predicate, androidx.core.util.Predicate
    public boolean test(Object obj) {
        boolean lambda$new$0;
        boolean lambda$8$lambda$6;
        switch (this.f613d) {
            case 13:
                lambda$new$0 = DiscordVideoEncoderFactory.lambda$new$0((MediaCodecInfo) obj);
                return lambda$new$0;
            default:
                lambda$8$lambda$6 = ChatInputRootView.lambda$8$lambda$6((ClipData.Item) obj);
                return lambda$8$lambda$6;
        }
    }

    @Override // com.facebook.react.modules.network.CustomClientBuilder
    public void apply(OkHttpClient.Builder builder) {
        switch (this.f613d) {
            case 22:
                ReactNetworking.patchReactNetworking$lambda$0(builder);
                break;
            default:
                ReactNetworking.patchReactNetworking$lambda$1(builder);
                break;
        }
    }
}

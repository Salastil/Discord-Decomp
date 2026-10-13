package com.discord.chat.reactevents;

import android.graphics.drawable.Drawable;
import android.os.Handler;
import com.discord.client_info.ClientInfo;
import com.discord.crash_reporting.TelemetryRing;
import com.discord.emoji.UnicodeEmojis;
import com.discord.emoji_picker.EmojiPickerViewHolder;
import com.discord.file_downloader.FileDownloader;
import com.discord.jank_stats.JankSessionRecorder;
import com.discord.misc.utilities.threading.ThreadUtilsKt;
import com.discord.mobile_voice_overlay.ConnectionQuality;
import com.discord.mobile_voice_overlay.MobileVoiceOverlayData;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.ScheduledExecutorService;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlinx.serialization.KSerializer;
import okhttp3.OkHttpClient;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4125d;

    public /* synthetic */ a(int i5) {
        this.f4125d = i5;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        KSerializer _childSerializers$_anonymous_;
        KSerializer _init_$_anonymous_;
        KSerializer _init_$_anonymous_2;
        KSerializer _init_$_anonymous_3;
        boolean isProdBuild_delegate$lambda$1;
        ScheduledExecutorService ioExecutor_delegate$lambda$2;
        KSerializer _childSerializers$_anonymous_2;
        KSerializer _childSerializers$_anonymous_3;
        KSerializer _childSerializers$_anonymous_$0;
        KSerializer _childSerializers$_anonymous_$1;
        KSerializer _childSerializers$_anonymous_$2;
        KSerializer _childSerializers$_anonymous_$3;
        KSerializer _childSerializers$_anonymous_$4;
        KSerializer _childSerializers$_anonymous_$5;
        KSerializer _childSerializers$_anonymous_$6;
        Drawable placeholder_delegate$lambda$0;
        OkHttpClient defaultClient_delegate$lambda$0;
        ExecutorService flushExecutor_delegate$lambda$2;
        Unit init$lambda$4$lambda$3;
        Handler uiHandler_delegate$lambda$0;
        KSerializer _init_$_anonymous_4;
        KSerializer _childSerializers$_anonymous_4;
        KSerializer _childSerializers$_anonymous_$02;
        KSerializer _childSerializers$_anonymous_$12;
        Unit unit;
        Unit unit2;
        Unit unit3;
        Unit unit4;
        Unit unit5;
        Unit unit6;
        switch (this.f4125d) {
            case 0:
                _childSerializers$_anonymous_ = TapCopyText._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_;
            case 1:
                _init_$_anonymous_ = TapOpTagData._init_$_anonymous_();
                return _init_$_anonymous_;
            case 2:
                _init_$_anonymous_2 = TapSuppressNotificationsIconData._init_$_anonymous_();
                return _init_$_anonymous_2;
            case 3:
                _init_$_anonymous_3 = TapTimeoutIconData._init_$_anonymous_();
                return _init_$_anonymous_3;
            case 4:
                isProdBuild_delegate$lambda$1 = ClientInfo.isProdBuild_delegate$lambda$1();
                return Boolean.valueOf(isProdBuild_delegate$lambda$1);
            case 5:
                ioExecutor_delegate$lambda$2 = TelemetryRing.ioExecutor_delegate$lambda$2();
                return ioExecutor_delegate$lambda$2;
            case 6:
                _childSerializers$_anonymous_2 = UnicodeEmojis.Emoji._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_2;
            case 7:
                _childSerializers$_anonymous_3 = UnicodeEmojis.EmojiCategories._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_3;
            case 8:
                _childSerializers$_anonymous_$0 = UnicodeEmojis.EmojiCategories._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$0;
            case 9:
                _childSerializers$_anonymous_$1 = UnicodeEmojis.EmojiCategories._childSerializers$_anonymous_$1();
                return _childSerializers$_anonymous_$1;
            case 10:
                _childSerializers$_anonymous_$2 = UnicodeEmojis.EmojiCategories._childSerializers$_anonymous_$2();
                return _childSerializers$_anonymous_$2;
            case 11:
                _childSerializers$_anonymous_$3 = UnicodeEmojis.EmojiCategories._childSerializers$_anonymous_$3();
                return _childSerializers$_anonymous_$3;
            case 12:
                _childSerializers$_anonymous_$4 = UnicodeEmojis.EmojiCategories._childSerializers$_anonymous_$4();
                return _childSerializers$_anonymous_$4;
            case 13:
                _childSerializers$_anonymous_$5 = UnicodeEmojis.EmojiCategories._childSerializers$_anonymous_$5();
                return _childSerializers$_anonymous_$5;
            case 14:
                _childSerializers$_anonymous_$6 = UnicodeEmojis.EmojiCategories._childSerializers$_anonymous_$6();
                return _childSerializers$_anonymous_$6;
            case 15:
                placeholder_delegate$lambda$0 = EmojiPickerViewHolder.Emoji.placeholder_delegate$lambda$0();
                return placeholder_delegate$lambda$0;
            case 16:
                defaultClient_delegate$lambda$0 = FileDownloader.defaultClient_delegate$lambda$0();
                return defaultClient_delegate$lambda$0;
            case 17:
                flushExecutor_delegate$lambda$2 = JankSessionRecorder.flushExecutor_delegate$lambda$2();
                return flushExecutor_delegate$lambda$2;
            case 18:
                init$lambda$4$lambda$3 = JankSessionRecorder.init$lambda$4$lambda$3();
                return init$lambda$4$lambda$3;
            case 19:
                uiHandler_delegate$lambda$0 = ThreadUtilsKt.uiHandler_delegate$lambda$0();
                return uiHandler_delegate$lambda$0;
            case 20:
                _init_$_anonymous_4 = ConnectionQuality._init_$_anonymous_();
                return _init_$_anonymous_4;
            case 21:
                _childSerializers$_anonymous_4 = MobileVoiceOverlayData._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_4;
            case 22:
                _childSerializers$_anonymous_$02 = MobileVoiceOverlayData._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$02;
            case 23:
                _childSerializers$_anonymous_$12 = MobileVoiceOverlayData._childSerializers$_anonymous_$1();
                return _childSerializers$_anonymous_$12;
            case 24:
                unit = Unit.a;
                return unit;
            case 25:
                unit2 = Unit.a;
                return unit2;
            case 26:
                unit3 = Unit.a;
                return unit3;
            case 27:
                unit4 = Unit.a;
                return unit4;
            case 28:
                unit5 = Unit.a;
                return unit5;
            default:
                unit6 = Unit.a;
                return unit6;
        }
    }
}

package o5;

import android.os.Handler;
import android.os.HandlerThread;
import android.view.animation.AnimationUtils;
import com.discord.chat.bridge.codedlinks.AppMessageEmbedDisplayType;
import com.discord.chat.bridge.codedlinks.AppMessageEmbedImpl;
import com.discord.chat.bridge.codedlinks.EmbeddedActivityInviteEmbedImpl;
import com.discord.chat.bridge.codedlinks.GuildProfileInviteEmbedImpl;
import com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbedImpl;
import com.discord.chat.bridge.customthemes.SharedCustomThemeData;
import com.discord.chat.bridge.gift_intent.GiftIntentEmbed;
import com.discord.chat.bridge.polls.PollAction;
import com.discord.chat.bridge.polls.PollActionPresentation;
import com.discord.chat.bridge.polls.PollData;
import com.discord.chat.bridge.polls.PollMedia;
import com.discord.chat.bridge.polls.PollResources;
import com.discord.chat.bridge.polls.PollStyleSet;
import com.discord.chat.bridge.row.BlockedGroupRow;
import com.discord.chat.bridge.row.LoadingAction;
import com.discord.chat.bridge.row.LoadingActionType;
import com.discord.chat.bridge.row.MessageRow;
import com.discord.chat.bridge.safetysystemnotification.FooterTheme;
import com.discord.chat.bridge.safetysystemnotification.SafetySystemNotificationEmbed;
import com.discord.chat.bridge.summaries.Summary;
import com.swmansion.rnscreens.utils.ScreenDummyLayoutHelper;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlinx.serialization.KSerializer;
import qn.c;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15792d;

    public /* synthetic */ a(int i5) {
        this.f15792d = i5;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        KSerializer _init_$_anonymous_;
        KSerializer _childSerializers$_anonymous_;
        KSerializer _childSerializers$_anonymous_$0;
        KSerializer _childSerializers$_anonymous_$1;
        KSerializer _childSerializers$_anonymous_2;
        KSerializer _childSerializers$_anonymous_3;
        KSerializer _childSerializers$_anonymous_4;
        KSerializer _childSerializers$_anonymous_5;
        Unit unit;
        Unit unit2;
        KSerializer _childSerializers$_anonymous_6;
        Unit unit3;
        KSerializer _childSerializers$_anonymous_7;
        KSerializer _init_$_anonymous_2;
        KSerializer _childSerializers$_anonymous_8;
        KSerializer _childSerializers$_anonymous_9;
        KSerializer _childSerializers$_anonymous_10;
        PollStyleSet DEFAULT_delegate$lambda$6;
        KSerializer _childSerializers$_anonymous_11;
        KSerializer _childSerializers$_anonymous_12;
        KSerializer _init_$_anonymous_3;
        KSerializer _childSerializers$_anonymous_13;
        KSerializer _init_$_anonymous_4;
        KSerializer _childSerializers$_anonymous_14;
        KSerializer _childSerializers$_anonymous_15;
        switch (this.f15792d) {
            case 0:
                _init_$_anonymous_ = AppMessageEmbedDisplayType._init_$_anonymous_();
                return _init_$_anonymous_;
            case 1:
                _childSerializers$_anonymous_ = AppMessageEmbedImpl._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_;
            case 2:
                _childSerializers$_anonymous_$0 = AppMessageEmbedImpl._childSerializers$_anonymous_$0();
                return _childSerializers$_anonymous_$0;
            case 3:
                _childSerializers$_anonymous_$1 = AppMessageEmbedImpl._childSerializers$_anonymous_$1();
                return _childSerializers$_anonymous_$1;
            case 4:
                _childSerializers$_anonymous_2 = EmbeddedActivityInviteEmbedImpl._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_2;
            case 5:
                _childSerializers$_anonymous_3 = GuildProfileInviteEmbedImpl._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_3;
            case 6:
                _childSerializers$_anonymous_4 = VoiceChannelListInviteEmbedImpl._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_4;
            case 7:
                return Long.valueOf(AnimationUtils.currentAnimationTimeMillis());
            case 8:
                _childSerializers$_anonymous_5 = SharedCustomThemeData._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_5;
            case 9:
                unit = Unit.a;
                return unit;
            case 10:
                unit2 = Unit.a;
                return unit2;
            case 11:
                return Unit.a;
            case 12:
                _childSerializers$_anonymous_6 = GiftIntentEmbed._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_6;
            case 13:
                unit3 = Unit.a;
                return unit3;
            case 14:
                c cVar = ScreenDummyLayoutHelper.G;
                return "[RNScreens] ReactContext missing in onHostResume! This should not happen.";
            case 15:
                throw new IllegalStateException("CompositionLocal LocalLifecycleOwner not present");
            case 16:
                _childSerializers$_anonymous_7 = PollAction._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_7;
            case 17:
                _init_$_anonymous_2 = PollActionPresentation._init_$_anonymous_();
                return _init_$_anonymous_2;
            case 18:
                _childSerializers$_anonymous_8 = PollData._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_8;
            case 19:
                _childSerializers$_anonymous_9 = PollMedia._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_9;
            case 20:
                _childSerializers$_anonymous_10 = PollResources._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_10;
            case 21:
                DEFAULT_delegate$lambda$6 = PollStyleSet.DEFAULT_delegate$lambda$6();
                return DEFAULT_delegate$lambda$6;
            case 22:
                HandlerThread handlerThread = new HandlerThread("FrescoAnimationWorker");
                handlerThread.start();
                return new Handler(handlerThread.getLooper());
            case 23:
                _childSerializers$_anonymous_11 = BlockedGroupRow._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_11;
            case 24:
                _childSerializers$_anonymous_12 = LoadingAction._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_12;
            case 25:
                _init_$_anonymous_3 = LoadingActionType._init_$_anonymous_();
                return _init_$_anonymous_3;
            case 26:
                _childSerializers$_anonymous_13 = MessageRow._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_13;
            case 27:
                _init_$_anonymous_4 = FooterTheme._init_$_anonymous_();
                return _init_$_anonymous_4;
            case 28:
                _childSerializers$_anonymous_14 = SafetySystemNotificationEmbed._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_14;
            default:
                _childSerializers$_anonymous_15 = Summary._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_15;
        }
    }
}

package u7;

import com.discord.chat.input.bridge.ChatInputNodeFontWeight;
import com.discord.chat.input.bridge.ChatInputNodeStyle;
import com.discord.resource_usage.utils.ProcfsStats;
import com.facebook.react.internal.featureflags.ReactNativeFeatureFlags;
import java.io.File;
import kotlin.jvm.functions.Function0;
import kotlinx.serialization.KSerializer;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18812d;

    public /* synthetic */ a(int i5) {
        this.f18812d = i5;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        boolean usePullModelOnAndroid;
        KSerializer _init_$_anonymous_;
        KSerializer _childSerializers$_anonymous_;
        File statFile_delegate$lambda$0;
        switch (this.f18812d) {
            case 0:
                usePullModelOnAndroid = ReactNativeFeatureFlags.usePullModelOnAndroid();
                return Boolean.valueOf(usePullModelOnAndroid);
            case 1:
                _init_$_anonymous_ = ChatInputNodeFontWeight._init_$_anonymous_();
                return _init_$_anonymous_;
            case 2:
                _childSerializers$_anonymous_ = ChatInputNodeStyle._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_;
            default:
                statFile_delegate$lambda$0 = ProcfsStats.statFile_delegate$lambda$0();
                return statFile_delegate$lambda$0;
        }
    }
}

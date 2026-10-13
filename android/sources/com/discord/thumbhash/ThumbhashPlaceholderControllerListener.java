package com.discord.thumbhash;

import android.graphics.drawable.Drawable;
import com.discord.image.fresco.listeners.ControllerListener;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.facebook.drawee.generic.GenericDraweeHierarchy;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.modules.appstate.AppStateModule;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u0003\n\u0002\b\u0002\u0018\u0000 \u00152\u00020\u0001:\u0001\u0015B+\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\u0004\b\n\u0010\u000bJ\u001c\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u00072\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011H\u0016J\u001c\u0010\u0012\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u00072\b\u0010\u0013\u001a\u0004\u0018\u00010\u0014H\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0012\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u0004¢\u0006\u0004\n\u0002\u0010\f¨\u0006\u0016"}, d2 = {"Lcom/discord/thumbhash/ThumbhashPlaceholderControllerListener;", "Lcom/discord/image/fresco/listeners/ControllerListener;", "draweeView", "Lcom/facebook/drawee/view/SimpleDraweeView;", AppStateModule.APP_STATE_BACKGROUND, "Landroid/graphics/drawable/Drawable;", "placeholder", "", "placeholderVersion", "", "<init>", "(Lcom/facebook/drawee/view/SimpleDraweeView;Landroid/graphics/drawable/Drawable;Ljava/lang/String;Ljava/lang/Integer;)V", "Ljava/lang/Integer;", "onSubmit", "", StackTraceHelper.ID_KEY, "callerContext", "", "onFailure", "throwable", "", "Companion", "thumbhash_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class ThumbhashPlaceholderControllerListener extends ControllerListener {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private final Drawable background;

    @NotNull
    private final SimpleDraweeView draweeView;
    private final String placeholder;
    private final Integer placeholderVersion;

    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001f\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u00072\b\u0010\b\u001a\u0004\u0018\u00010\t¢\u0006\u0002\u0010\n¨\u0006\u000b"}, d2 = {"Lcom/discord/thumbhash/ThumbhashPlaceholderControllerListener$Companion;", "", "<init>", "()V", "canDisplay", "", "placeholder", "", "placeholderVersion", "", "(Ljava/lang/String;Ljava/lang/Integer;)Z", "thumbhash_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public final boolean canDisplay(String placeholder, Integer placeholderVersion) {
            return (placeholderVersion == null || placeholderVersion.intValue() != 1 || placeholder == null) ? false : true;
        }

        private Companion() {
        }
    }

    public ThumbhashPlaceholderControllerListener(@NotNull SimpleDraweeView draweeView, @NotNull Drawable background, String str, Integer num) {
        Intrinsics.checkNotNullParameter(draweeView, "draweeView");
        Intrinsics.checkNotNullParameter(background, "background");
        this.draweeView = draweeView;
        this.background = background;
        this.placeholder = str;
        this.placeholderVersion = num;
    }

    @Override // com.discord.image.fresco.listeners.ControllerListener, com.facebook.drawee.controller.ControllerListener
    public void onFailure(String id2, Throwable throwable) {
        ((GenericDraweeHierarchy) this.draweeView.getHierarchy()).k(this.background, 0);
    }

    @Override // com.discord.image.fresco.listeners.ControllerListener, com.facebook.drawee.controller.ControllerListener
    public void onSubmit(String id2, Object callerContext) {
        ((GenericDraweeHierarchy) this.draweeView.getHierarchy()).k(null, 1);
        if (!INSTANCE.canDisplay(this.placeholder, this.placeholderVersion)) {
            ((GenericDraweeHierarchy) this.draweeView.getHierarchy()).k(this.background, 0);
        } else {
            ((GenericDraweeHierarchy) this.draweeView.getHierarchy()).k(null, 0);
            x.t(CoroutineViewUtilsKt.getAttachedScope(this.draweeView), null, new ThumbhashPlaceholderControllerListener$onSubmit$1(this, null), 3);
        }
    }
}

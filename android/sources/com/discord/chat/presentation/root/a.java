package com.discord.chat.presentation.root;

import android.view.View;
import com.discord.emoji_picker.EmojiPickerScroller;
import com.discord.fastest_list.android.FastestListView;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.b0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function5;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements View.OnLayoutChangeListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4110d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4111e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4112i;

    public /* synthetic */ a(int i5, Object obj, Object obj2) {
        this.f4110d = i5;
        this.f4111e = obj;
        this.f4112i = obj2;
    }

    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View view, int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15) {
        switch (this.f4110d) {
            case 0:
                ChatView.attachPortalViewToChatList$lambda$5((View) this.f4111e, (ChatView) this.f4112i, view, i5, i6, i10, i11, i12, i13, i14, i15);
                break;
            case 1:
                EmojiPickerScroller.scrollViewLayoutChanged$lambda$5((EmojiPickerScroller) this.f4111e, (Function2) this.f4112i, view, i5, i6, i10, i11, i12, i13, i14, i15);
                break;
            case 2:
                FastestListView.onLayoutChangeListener$lambda$4((FastestListView) this.f4111e, (Function5) this.f4112i, view, i5, i6, i10, i11, i12, i13, i14, i15);
                break;
            default:
                nm.a aVar = (nm.a) this.f4111e;
                Screen screen = ((b0) this.f4112i).a();
                Intrinsics.checkNotNullParameter(screen, "screen");
                aVar.a = true;
                if (aVar.f15552b) {
                    screen.requestTriggeringPostponedEnterTransition$react_native_screens_release();
                    screen.triggerPostponedEnterTransitionIfNeeded$react_native_screens_release();
                    break;
                }
                break;
        }
    }
}

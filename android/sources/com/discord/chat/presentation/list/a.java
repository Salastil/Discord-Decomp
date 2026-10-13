package com.discord.chat.presentation.list;

import android.graphics.Paint;
import android.graphics.drawable.ColorDrawable;
import com.discord.chat.presentation.message.MessageAccessoriesView;
import com.discord.chat.presentation.message.MessageFrameFeedHeaderView;
import com.discord.chat.presentation.message.MessageView;
import com.discord.chat.presentation.message.view.botuikit.components.SelectComponentView;
import com.discord.chat.presentation.message.view.voicemessages.AudioPlayerWipeAnimatorManager;
import com.discord.chat.presentation.root.MessageContextType;
import com.discord.chat.presentation.textutils.CodeStyle;
import com.discord.simpleast.core.parser.Parser;
import com.facebook.imagepipeline.request.BasePostprocessor;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlinx.serialization.KSerializer;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3876d;

    public /* synthetic */ a(int i5) {
        this.f3876d = i5;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit unit;
        Unit unit2;
        Unit unit3;
        Unit unit4;
        Unit unit5;
        NoneClearingRecycledViewPool chatListViewPool_delegate$lambda$0;
        AccessoriesViewPool accessoriesViewPool_delegate$lambda$2;
        MessageView.ChainPart chainPart;
        Unit unit6;
        Paint forwardBarPaint_delegate$lambda$1;
        KSerializer _childSerializers$_anonymous_;
        MessageView.ChainPart chainPart2;
        MessageView.ChainPart chainPart3;
        Unit unit7;
        Unit unit8;
        Unit unit9;
        Unit unit10;
        Unit unit11;
        Unit unit12;
        Unit unit13;
        Unit unit14;
        Unit unit15;
        Unit unit16;
        BasePostprocessor postProcessor_delegate$lambda$1;
        ColorDrawable buttonContainerActiveDrawable_delegate$lambda$2;
        Unit unit17;
        Unit unit18;
        KSerializer _init_$_anonymous_;
        Parser parser_delegate$lambda$11;
        Unit unit19;
        switch (this.f3876d) {
            case 0:
                unit = Unit.a;
                return unit;
            case 1:
                unit2 = Unit.a;
                return unit2;
            case 2:
                unit3 = Unit.a;
                return unit3;
            case 3:
                unit4 = Unit.a;
                return unit4;
            case 4:
                unit5 = Unit.a;
                return unit5;
            case 5:
                chatListViewPool_delegate$lambda$0 = SharedRecycledViewPools.chatListViewPool_delegate$lambda$0();
                return chatListViewPool_delegate$lambda$0;
            case 6:
                accessoriesViewPool_delegate$lambda$2 = SharedRecycledViewPools.accessoriesViewPool_delegate$lambda$2();
                return accessoriesViewPool_delegate$lambda$2;
            case 7:
                chainPart = MessageView.ChainPart.ONLY;
                return chainPart;
            case 8:
                unit6 = Unit.a;
                return unit6;
            case 9:
                forwardBarPaint_delegate$lambda$1 = MessageAccessoriesView.forwardBarPaint_delegate$lambda$1();
                return forwardBarPaint_delegate$lambda$1;
            case 10:
                _childSerializers$_anonymous_ = MessageFrameFeedHeaderView.MessageBundleHeader._childSerializers$_anonymous_();
                return _childSerializers$_anonymous_;
            case 11:
                chainPart2 = MessageView.ChainPart.ONLY;
                return chainPart2;
            case 12:
                chainPart3 = MessageView.ChainPart.ONLY;
                return chainPart3;
            case 13:
                unit7 = Unit.a;
                return unit7;
            case 14:
                unit8 = Unit.a;
                return unit8;
            case 15:
                unit9 = Unit.a;
                return unit9;
            case 16:
                unit10 = Unit.a;
                return unit10;
            case 17:
                unit11 = Unit.a;
                return unit11;
            case 18:
                unit12 = Unit.a;
                return unit12;
            case 19:
                unit13 = Unit.a;
                return unit13;
            case 20:
                unit14 = Unit.a;
                return unit14;
            case 21:
                unit15 = Unit.a;
                return unit15;
            case 22:
                unit16 = Unit.a;
                return unit16;
            case 23:
                postProcessor_delegate$lambda$1 = SelectComponentView.postProcessor_delegate$lambda$1();
                return postProcessor_delegate$lambda$1;
            case 24:
                buttonContainerActiveDrawable_delegate$lambda$2 = AudioPlayerWipeAnimatorManager.buttonContainerActiveDrawable_delegate$lambda$2();
                return buttonContainerActiveDrawable_delegate$lambda$2;
            case 25:
                unit17 = Unit.a;
                return unit17;
            case 26:
                unit18 = Unit.a;
                return unit18;
            case 27:
                _init_$_anonymous_ = MessageContextType._init_$_anonymous_();
                return _init_$_anonymous_;
            case 28:
                parser_delegate$lambda$11 = CodeStyle.parser_delegate$lambda$11();
                return parser_delegate$lambda$11;
            default:
                unit19 = Unit.a;
                return unit19;
        }
    }
}

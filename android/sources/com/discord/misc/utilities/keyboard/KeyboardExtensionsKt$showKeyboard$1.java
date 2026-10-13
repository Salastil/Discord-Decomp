package com.discord.misc.utilities.keyboard;

import android.view.View;
import android.view.Window;
import android.widget.EditText;
import androidx.core.view.WindowInsetsControllerCompat;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.misc.utilities.keyboard.KeyboardExtensionsKt$showKeyboard$1", f = "KeyboardExtensions.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class KeyboardExtensionsKt$showKeyboard$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ View $self;
    final /* synthetic */ Window $window;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public KeyboardExtensionsKt$showKeyboard$1(Window window, View view, Continuation continuation) {
        super(2, continuation);
        this.$window = window;
        this.$self = view;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new KeyboardExtensionsKt$showKeyboard$1(this.$window, this.$self, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        WindowInsetsControllerCompat insetsController;
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        insetsController = KeyboardExtensionsKt.getInsetsController(this.$window, this.$self);
        insetsController.e(8);
        View view = this.$self;
        EditText editText = view instanceof EditText ? (EditText) view : null;
        if (editText != null) {
            editText.requestFocus();
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((KeyboardExtensionsKt$showKeyboard$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}

package com.discord.chat.input.views;

import android.content.ClipData;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.text.Editable;
import android.text.Layout;
import android.text.SpannableStringBuilder;
import android.text.TextWatcher;
import android.text.style.MetricAffectingSpan;
import android.util.AttributeSet;
import android.util.Pair;
import android.view.ActionMode;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.Window;
import android.widget.RelativeLayout;
import androidx.core.view.ContentInfoCompat;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.g;
import androidx.core.view.k0;
import androidx.core.view.p0;
import androidx.core.view.s;
import androidx.core.view.s0;
import bs.e1;
import com.discord.R;
import com.discord.SetTextSizeSpKt;
import com.discord.chat.input.bridge.ChatInputNode;
import com.discord.chat.input.databinding.ChatInputRootViewBinding;
import com.discord.chat.input.plugins.DeleteNodeOnBackspaceTextWatcher;
import com.discord.chat.input.plugins.SelectionGuardSpanWatcher;
import com.discord.chat.input.spans.DCDInputSpan;
import com.discord.chat.input.utils.EditTextUtilsKt;
import com.discord.chat.input.views.ChatInputRootView;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.jank_stats.JankRecordStore;
import com.discord.keyboard.KeyboardEvent;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.discord.misc.utilities.keyboard.KeyboardExtensionsKt;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.react_strings.I18nMessage;
import com.discord.react_strings.I18nUtilsKt;
import com.discord.span.utilities.BackgroundSpanDrawer;
import com.discord.span.utilities.SpannableExtensionsKt;
import com.facebook.react.uimanager.ViewProps;
import com.margelo.nitro.rive.v0;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import java.util.UUID;
import java.util.WeakHashMap;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.d0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlin.text.x;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.flow.MutableStateFlow;
import org.jetbrains.annotations.NotNull;
import qr.y;

@Metadata(d1 = {"\u0000¯\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010#\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0010\u000e\n\u0002\b\u000e\n\u0002\u0010\r\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0007\n\u0002\b\u0005\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003*\u0001\u0010\u0018\u00002\u00020\u00012\u00020\u0002:\u0002opB'\b\u0007\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\b\b\u0002\u0010\u0007\u001a\u00020\b¢\u0006\u0004\b\t\u0010\nJ\u000e\u0010#\u001a\u00020$2\u0006\u0010%\u001a\u00020&J\u0018\u0010'\u001a\u00020$2\u0006\u0010(\u001a\u00020\b2\b\b\u0002\u0010)\u001a\u00020\bJ\u0006\u0010*\u001a\u00020\u000eJ\u0006\u0010+\u001a\u00020$J\r\u0010D\u001a\u00020EH\u0000¢\u0006\u0002\bFJ\u0015\u0010G\u001a\u00020$2\u0006\u0010/\u001a\u00020EH\u0000¢\u0006\u0002\bHJ\u000e\u0010S\u001a\u00020$2\u0006\u0010T\u001a\u00020\u000eJ\u000e\u0010U\u001a\u00020$2\u0006\u0010V\u001a\u00020WJ\b\u0010X\u001a\u00020$H\u0014J>\u0010Y\u001a\u00020$2\u0006\u0010Z\u001a\u00020\b2\u0006\u0010[\u001a\u00020\b2\u0006\u0010A\u001a\u0002062\f\u0010\\\u001a\b\u0012\u0004\u0012\u00020^0]2\u0006\u0010_\u001a\u00020\u000e2\b\u0010`\u001a\u0004\u0018\u000106J\u0006\u0010a\u001a\u00020$J\u001e\u0010b\u001a\u00020$2\b\u0010`\u001a\u0004\u0018\u0001062\f\u0010c\u001a\b\u0012\u0004\u0012\u00020^0]J \u0010d\u001a\u00020$2\f\u0010c\u001a\b\u0012\u0004\u0012\u00020^0]2\b\b\u0002\u0010e\u001a\u00020\bH\u0002J\u0010\u0010f\u001a\u00020$2\u0006\u0010g\u001a\u00020\u000eH\u0016J\b\u0010h\u001a\u00020$H\u0002J!\u0010i\u001a\u00020$*\u00020 2\u0012\u0010j\u001a\u000e\u0012\u0004\u0012\u00020l\u0012\u0004\u0012\u00020$0kH\u0082\bJ!\u0010m\u001a\u00020$*\u00020 2\u0012\u0010j\u001a\u000e\u0012\u0004\u0012\u00020n\u0012\u0004\u0012\u00020$0kH\u0082\bR\u0010\u0010\u000b\u001a\u0004\u0018\u00010\fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u000f\u001a\u00020\u0010X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0011R\u001c\u0010\u0012\u001a\u0004\u0018\u00010\u0013X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0014\u0010\u0015\"\u0004\b\u0016\u0010\u0017R\u000e\u0010\u0018\u001a\u00020\u0019X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u001bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001c\u001a\u00020\u001dX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u001e\u001a\b\u0012\u0004\u0012\u00020 0\u001fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010!\u001a\u00020\"X\u0082\u0004¢\u0006\u0002\n\u0000R\u0013\u0010,\u001a\u0004\u0018\u00010\b8F¢\u0006\u0006\u001a\u0004\b-\u0010.R$\u00100\u001a\u00020\u000e2\u0006\u0010/\u001a\u00020\u000e8F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b0\u00101\"\u0004\b2\u00103R$\u00104\u001a\u00020\u000e2\u0006\u0010/\u001a\u00020\u000e8F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b4\u00101\"\u0004\b5\u00103R(\u00107\u001a\u0004\u0018\u0001062\b\u0010/\u001a\u0004\u0018\u0001068F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b8\u00109\"\u0004\b:\u0010;R&\u0010<\u001a\u00020\b2\b\b\u0001\u0010/\u001a\u00020\b8F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b=\u0010>\"\u0004\b?\u0010@R$\u0010A\u001a\u0002062\u0006\u0010/\u001a\u0002068F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bB\u00109\"\u0004\bC\u0010;R&\u0010I\u001a\u00020\b2\b\b\u0001\u0010/\u001a\u00020\b8F@FX\u0086\u000e¢\u0006\f\u001a\u0004\bJ\u0010>\"\u0004\bK\u0010@R\u0010\u0010L\u001a\u0004\u0018\u00010EX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010M\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010N\u001a\u000206X\u0082\u000e¢\u0006\u0002\n\u0000R\u0016\u0010O\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010Q0PX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010R\u001a\b\u0012\u0004\u0012\u00020\b0PX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006q"}, d2 = {"Lcom/discord/chat/input/views/ChatInputRootView;", "Landroid/widget/RelativeLayout;", "Lcom/discord/keyboard/KeyboardEvent;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "defStyleAttr", "", "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "blurJob", "Lkotlinx/coroutines/Job;", "isActionModeActive", "", "actionModeListener", "com/discord/chat/input/views/ChatInputRootView$actionModeListener$1", "Lcom/discord/chat/input/views/ChatInputRootView$actionModeListener$1;", "listener", "Lcom/discord/chat/input/views/ChatInputRootView$ChatInputListener;", "getListener", "()Lcom/discord/chat/input/views/ChatInputRootView$ChatInputListener;", "setListener", "(Lcom/discord/chat/input/views/ChatInputRootView$ChatInputListener;)V", "binding", "Lcom/discord/chat/input/databinding/ChatInputRootViewBinding;", "lineHeightMeasurer", "Lcom/discord/chat/input/views/ChatInputRootViewMeasurer;", "editText", "Lcom/discord/chat/input/views/DCDChatInput;", "insertedPayloads", "", "Landroidx/core/view/ContentInfoCompat;", "leadingIconRenderer", "Lcom/discord/chat/input/views/ChatInputLeadingIconRenderer;", "showKeyboard", "", "window", "Landroid/view/Window;", "setSelection", ViewProps.START, "stop", "requestInputFocus", "clearInputFocus", "lineCount", "getLineCount", "()Ljava/lang/Integer;", "value", "isCursorVisible", "()Z", "setCursorVisible", "(Z)V", "isEditTextEnabled", "setEditTextEnabled", "", "hint", "getHint", "()Ljava/lang/String;", "setHint", "(Ljava/lang/String;)V", "hintTextColor", "getHintTextColor", "()I", "setHintTextColor", "(I)V", "text", "getText", "setText", "textWithIconSpansForMeasurement", "", "textWithIconSpansForMeasurement$chat_input_release", "setMeasurementText", "setMeasurementText$chat_input_release", "textColor", "getTextColor", "setTextColor", "editTextHint", "editTextMaxLines", "lastEditId", "currentTextFlow", "Lkotlinx/coroutines/flow/MutableStateFlow;", "Lcom/discord/chat/input/views/ChatInputRootView$CurrentTextAndSelection;", "currentLayoutFlow", "setNoExtractUI", ViewProps.ENABLED, "setContentMaxHeight", "dp", "", "onAttachedToWindow", "replaceRange", "location", "length", "styleBlocks", "", "Lcom/discord/chat/input/bridge/ChatInputNode;", "keepCursorPosition", "editId", "backspace", "clearAndApplyChatNodes", "chatInputNodes", "updateChatNodes", "offset", "onKeyboardStateChanged", "opened", "updateHintEllipsis", "forEachUri", "action", "Lkotlin/Function1;", "Landroid/net/Uri;", "forEachIntent", "Landroid/content/Intent;", "ChatInputListener", "CurrentTextAndSelection", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nChatInputRootView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ChatInputRootView.kt\ncom/discord/chat/input/views/ChatInputRootView\n+ 2 TextView.kt\nandroidx/core/widget/TextViewKt\n+ 3 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n+ 4 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 5 SpannableExtensions.kt\ncom/discord/span/utilities/SpannableExtensionsKt\n+ 6 Pair.kt\nandroidx/core/util/PairKt\n*L\n1#1,501:1\n490#1,4:536\n496#1,4:542\n48#2,19:502\n84#2,3:521\n13472#3,2:524\n1563#4:526\n1634#4,3:527\n1869#4,2:530\n6#5:532\n6#5:533\n66#6:534\n78#6:535\n66#6:540\n78#6:541\n*S KotlinDebug\n*F\n+ 1 ChatInputRootView.kt\ncom/discord/chat/input/views/ChatInputRootView\n*L\n284#1:536,4\n295#1:542,4\n314#1:502,19\n314#1:521,3\n398#1:524,2\n406#1:526\n406#1:527,3\n406#1:530,2\n414#1:532\n418#1:533\n274#1:534\n274#1:535\n288#1:540\n288#1:541\n*E\n"})
/* loaded from: classes.dex */
public final class ChatInputRootView extends RelativeLayout implements KeyboardEvent {

    @NotNull
    private final ChatInputRootView$actionModeListener$1 actionModeListener;

    @NotNull
    private final ChatInputRootViewBinding binding;
    private Job blurJob;

    @NotNull
    private final MutableStateFlow currentLayoutFlow;

    @NotNull
    private final MutableStateFlow currentTextFlow;

    @NotNull
    private final DCDChatInput editText;
    private CharSequence editTextHint;
    private int editTextMaxLines;

    @NotNull
    private final Set<ContentInfoCompat> insertedPayloads;
    private boolean isActionModeActive;

    @NotNull
    private String lastEditId;

    @NotNull
    private final ChatInputLeadingIconRenderer leadingIconRenderer;

    @NotNull
    private ChatInputRootViewMeasurer lineHeightMeasurer;
    private ChatInputListener listener;

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0004\bf\u0018\u00002\u00020\u0001J\u0018\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0005H&J\u0010\u0010\u0007\u001a\u00020\u00032\u0006\u0010\b\u001a\u00020\tH&J\u0018\u0010\n\u001a\u00020\u00032\u0006\u0010\u000b\u001a\u00020\u00052\u0006\u0010\f\u001a\u00020\u0005H&J(\u0010\r\u001a\u00020\u00032\u0006\u0010\u000b\u001a\u00020\u00052\u0006\u0010\f\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\u000e\u001a\u00020\tH&J\u0010\u0010\u000f\u001a\u00020\u00032\u0006\u0010\u0010\u001a\u00020\u0011H&J\b\u0010\u0012\u001a\u00020\u0003H&J\u0010\u0010\u0013\u001a\u00020\u00032\u0006\u0010\u0014\u001a\u00020\tH&¨\u0006\u0015"}, d2 = {"Lcom/discord/chat/input/views/ChatInputRootView$ChatInputListener;", "", "onContentSizeChange", "", "width", "", "height", "onEndBlur", "text", "", "onFocus", ViewProps.START, ViewProps.END, "onTextOrSelectionChanged", "editId", "onImageInserted", "uri", "Landroid/net/Uri;", "onRequestSend", "onCommandInserted", "data", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public interface ChatInputListener {
        void onCommandInserted(@NotNull String data);

        void onContentSizeChange(int width, int height);

        void onEndBlur(@NotNull String text);

        void onFocus(int start, int end);

        void onImageInserted(@NotNull Uri uri);

        void onRequestSend();

        void onTextOrSelectionChanged(int start, int end, @NotNull String text, @NotNull String editId);
    }

    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u000f\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0086\b\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\b\u0010\tJ\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0006HÆ\u0003J\t\u0010\u0013\u001a\u00020\u0006HÆ\u0003J1\u0010\u0014\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\u0006HÆ\u0001J\u0013\u0010\u0015\u001a\u00020\u00162\b\u0010\u0017\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0018\u001a\u00020\u0003HÖ\u0001J\t\u0010\u0019\u001a\u00020\u0006HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\u000bR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0007\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u000e¨\u0006\u001a"}, d2 = {"Lcom/discord/chat/input/views/ChatInputRootView$CurrentTextAndSelection;", "", "selectionStart", "", "selectionEnd", "text", "", "editId", "<init>", "(IILjava/lang/String;Ljava/lang/String;)V", "getSelectionStart", "()I", "getSelectionEnd", "getText", "()Ljava/lang/String;", "getEditId", "component1", "component2", "component3", "component4", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class CurrentTextAndSelection {

        @NotNull
        private final String editId;
        private final int selectionEnd;
        private final int selectionStart;

        @NotNull
        private final String text;

        public CurrentTextAndSelection(int i5, int i6, @NotNull String text, @NotNull String editId) {
            Intrinsics.checkNotNullParameter(text, "text");
            Intrinsics.checkNotNullParameter(editId, "editId");
            this.selectionStart = i5;
            this.selectionEnd = i6;
            this.text = text;
            this.editId = editId;
        }

        public static /* synthetic */ CurrentTextAndSelection copy$default(CurrentTextAndSelection currentTextAndSelection, int i5, int i6, String str, String str2, int i10, Object obj) {
            if ((i10 & 1) != 0) {
                i5 = currentTextAndSelection.selectionStart;
            }
            if ((i10 & 2) != 0) {
                i6 = currentTextAndSelection.selectionEnd;
            }
            if ((i10 & 4) != 0) {
                str = currentTextAndSelection.text;
            }
            if ((i10 & 8) != 0) {
                str2 = currentTextAndSelection.editId;
            }
            return currentTextAndSelection.copy(i5, i6, str, str2);
        }

        /* renamed from: component1, reason: from getter */
        public final int getSelectionStart() {
            return this.selectionStart;
        }

        /* renamed from: component2, reason: from getter */
        public final int getSelectionEnd() {
            return this.selectionEnd;
        }

        @NotNull
        /* renamed from: component3, reason: from getter */
        public final String getText() {
            return this.text;
        }

        @NotNull
        /* renamed from: component4, reason: from getter */
        public final String getEditId() {
            return this.editId;
        }

        @NotNull
        public final CurrentTextAndSelection copy(int selectionStart, int selectionEnd, @NotNull String text, @NotNull String editId) {
            Intrinsics.checkNotNullParameter(text, "text");
            Intrinsics.checkNotNullParameter(editId, "editId");
            return new CurrentTextAndSelection(selectionStart, selectionEnd, text, editId);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof CurrentTextAndSelection)) {
                return false;
            }
            CurrentTextAndSelection currentTextAndSelection = (CurrentTextAndSelection) other;
            return this.selectionStart == currentTextAndSelection.selectionStart && this.selectionEnd == currentTextAndSelection.selectionEnd && Intrinsics.areEqual(this.text, currentTextAndSelection.text) && Intrinsics.areEqual(this.editId, currentTextAndSelection.editId);
        }

        @NotNull
        public final String getEditId() {
            return this.editId;
        }

        public final int getSelectionEnd() {
            return this.selectionEnd;
        }

        public final int getSelectionStart() {
            return this.selectionStart;
        }

        @NotNull
        public final String getText() {
            return this.text;
        }

        public int hashCode() {
            return this.editId.hashCode() + a3.e.d(com.discord.chat.bridge.botuikit.a.u(this.selectionEnd, Integer.hashCode(this.selectionStart) * 31, 31), 31, this.text);
        }

        @NotNull
        public String toString() {
            int i5 = this.selectionStart;
            int i6 = this.selectionEnd;
            return com.discord.chat.bridge.botuikit.a.k(a3.e.q(i5, "CurrentTextAndSelection(selectionStart=", i6, ", selectionEnd=", ", text="), this.text, ", editId=", this.editId, ")");
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public ChatInputRootView(@NotNull Context context) {
        this(context, null, 0, 6, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit _init_$lambda$1(ChatInputRootView chatInputRootView) {
        ChatInputListener chatInputListener = chatInputRootView.listener;
        if (chatInputListener != null) {
            chatInputListener.onRequestSend();
        }
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void _init_$lambda$10(ChatInputRootView chatInputRootView, View view, int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15) {
        MutableStateFlow mutableStateFlow = chatInputRootView.currentLayoutFlow;
        mutableStateFlow.setValue(Integer.valueOf(((Number) mutableStateFlow.getValue()).intValue() + 1));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit _init_$lambda$2(ChatInputRootView chatInputRootView, int i5, int i6) {
        chatInputRootView.currentTextFlow.setValue(new CurrentTextAndSelection(i5, i6, String.valueOf(chatInputRootView.editText.getText()), chatInputRootView.lastEditId));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void _init_$lambda$3(ChatInputRootView chatInputRootView, View view, boolean z5) {
        if (z5) {
            ChatInputListener chatInputListener = chatInputRootView.listener;
            if (chatInputListener != null) {
                chatInputListener.onFocus(chatInputRootView.editText.getSelectionStart(), chatInputRootView.editText.getSelectionStart());
                return;
            }
            return;
        }
        ChatInputListener chatInputListener2 = chatInputRootView.listener;
        if (chatInputListener2 != null) {
            chatInputListener2.onEndBlur(String.valueOf(chatInputRootView.editText.getText()));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ContentInfoCompat _init_$lambda$8(ChatInputRootView chatInputRootView, Context context, View view, ContentInfoCompat payload) {
        boolean z5;
        ChatInputListener chatInputListener;
        Intrinsics.checkNotNullParameter(view, "<unused var>");
        Intrinsics.checkNotNullParameter(payload, "payload");
        Pair b10 = payload.b(new d(context, 0));
        Intrinsics.checkNotNullExpressionValue(b10, "partition(...)");
        ContentInfoCompat contentInfoCompat = (ContentInfoCompat) b10.first;
        ContentInfoCompat contentInfoCompat2 = (ContentInfoCompat) b10.second;
        if (contentInfoCompat != null) {
            g gVar = contentInfoCompat.a;
            chatInputRootView.insertedPayloads.add(payload);
            int itemCount = gVar.f().getItemCount();
            for (int i5 = 0; i5 < itemCount; i5++) {
                Uri uri = gVar.f().getItemAt(i5).getUri();
                Intrinsics.checkNotNullExpressionValue(uri, "getUri(...)");
                ChatInputListener chatInputListener2 = chatInputRootView.listener;
                if (chatInputListener2 != null) {
                    chatInputListener2.onImageInserted(uri);
                }
            }
            z5 = true;
        } else {
            z5 = false;
        }
        if (contentInfoCompat2 != null) {
            Editable text = chatInputRootView.editText.getText();
            if (text != null && !StringsKt.K(text)) {
                return contentInfoCompat2;
            }
            Pair b11 = contentInfoCompat2.b(new ah.a(17));
            Intrinsics.checkNotNullExpressionValue(b11, "partition(...)");
            ContentInfoCompat contentInfoCompat3 = (ContentInfoCompat) b11.first;
            contentInfoCompat2 = (ContentInfoCompat) b11.second;
            if (contentInfoCompat3 != null) {
                g gVar2 = contentInfoCompat3.a;
                if (!z5) {
                    chatInputRootView.insertedPayloads.add(payload);
                }
                int itemCount2 = gVar2.f().getItemCount();
                for (int i6 = 0; i6 < itemCount2; i6++) {
                    Intent intent = gVar2.f().getItemAt(i6).getIntent();
                    Intrinsics.checkNotNullExpressionValue(intent, "getIntent(...)");
                    String stringExtra = intent.getStringExtra("data");
                    if (stringExtra != null && (chatInputListener = chatInputRootView.listener) != null) {
                        chatInputListener.onCommandInserted(stringExtra);
                    }
                }
                return null;
            }
        }
        return contentInfoCompat2;
    }

    private final void forEachIntent(ContentInfoCompat contentInfoCompat, Function1<? super Intent, Unit> function1) {
        int itemCount = contentInfoCompat.a.f().getItemCount();
        for (int i5 = 0; i5 < itemCount; i5++) {
            Intent intent = contentInfoCompat.a.f().getItemAt(i5).getIntent();
            Intrinsics.checkNotNullExpressionValue(intent, "getIntent(...)");
            function1.invoke(intent);
        }
    }

    private final void forEachUri(ContentInfoCompat contentInfoCompat, Function1<? super Uri, Unit> function1) {
        int itemCount = contentInfoCompat.a.f().getItemCount();
        for (int i5 = 0; i5 < itemCount; i5++) {
            Uri uri = contentInfoCompat.a.f().getItemAt(i5).getUri();
            Intrinsics.checkNotNullExpressionValue(uri, "getUri(...)");
            function1.invoke(uri);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean lambda$8$lambda$4(Context context, ClipData.Item item) {
        String type;
        return (item.getUri() == null || (type = context.getContentResolver().getType(item.getUri())) == null || !x.o(type, "image/", false)) ? false : true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean lambda$8$lambda$6(ClipData.Item item) {
        return item.getIntent() != null && Intrinsics.areEqual(item.getIntent().getType(), "application/x-discord-interaction-data") && item.getIntent().hasExtra("data");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit lineHeightMeasurer$lambda$0(ChatInputRootView chatInputRootView, int i5) {
        ChatInputListener chatInputListener = chatInputRootView.listener;
        if (chatInputListener != null) {
            chatInputListener.onContentSizeChange((int) SizeUtilsKt.getPxToDp(chatInputRootView.getWidth()), (int) SizeUtilsKt.getPxToDp(i5));
        }
        return Unit.a;
    }

    public static /* synthetic */ void setSelection$default(ChatInputRootView chatInputRootView, int i5, int i6, int i10, Object obj) {
        if ((i10 & 2) != 0) {
            i6 = i5;
        }
        chatInputRootView.setSelection(i5, i6);
    }

    private final void updateChatNodes(List<ChatInputNode> chatInputNodes, int offset) {
        ArrayList arrayList = new ArrayList(d0.l(chatInputNodes, 10));
        for (ChatInputNode chatInputNode : chatInputNodes) {
            arrayList.add(ChatInputNode.copy$default(chatInputNode, 0, chatInputNode.getLocation() + offset, 0, null, false, null, false, null, null, null, null, 2045, null));
        }
        Iterator it = arrayList.iterator();
        boolean z5 = false;
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            ChatInputNode chatInputNode2 = (ChatInputNode) it.next();
            Editable editableText = this.editText.getEditableText();
            Intrinsics.checkNotNullExpressionValue(editableText, "getEditableText(...)");
            EditTextUtilsKt.setChatInputNodeStyle(editableText, chatInputNode2);
            String icon = chatInputNode2.getIcon();
            if (icon != null && icon.length() != 0) {
                this.leadingIconRenderer.applyLeadingIcon(chatInputNode2);
                z5 = true;
            }
        }
        Editable editableText2 = this.editText.getEditableText();
        Intrinsics.checkNotNullExpressionValue(editableText2, "getEditableText(...)");
        Object[] spans = editableText2.getSpans(0, editableText2.length(), BackgroundSpanDrawer.class);
        Intrinsics.checkNotNullExpressionValue(spans, "getSpans(...)");
        if (spans.length == 0) {
            Editable editableText3 = this.editText.getEditableText();
            Intrinsics.checkNotNullExpressionValue(editableText3, "getEditableText(...)");
            SpannableExtensionsKt.coverWithSpan(editableText3, new BackgroundSpanDrawer(this.editText));
        }
        Editable editableText4 = this.editText.getEditableText();
        Intrinsics.checkNotNullExpressionValue(editableText4, "getEditableText(...)");
        Object[] spans2 = editableText4.getSpans(0, editableText4.length(), SelectionGuardSpanWatcher.class);
        Intrinsics.checkNotNullExpressionValue(spans2, "getSpans(...)");
        if (spans2.length == 0) {
            Editable editableText5 = this.editText.getEditableText();
            Intrinsics.checkNotNullExpressionValue(editableText5, "getEditableText(...)");
            SpannableExtensionsKt.coverWithSpan(editableText5, new SelectionGuardSpanWatcher());
        }
        if (z5) {
            this.lineHeightMeasurer.measure(false);
        }
    }

    public static /* synthetic */ void updateChatNodes$default(ChatInputRootView chatInputRootView, List list, int i5, int i6, Object obj) {
        if ((i6 & 2) != 0) {
            i5 = 0;
        }
        chatInputRootView.updateChatNodes(list, i5);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void updateHintEllipsis() {
        if (this.editText.length() == 0) {
            EditTextUtilsKt.addEllipsizedHint$default(this.editText, this.editTextHint, null, 2, null);
        } else {
            EditTextUtilsKt.removeEllipsizedHint(this.editText, this.editTextMaxLines);
        }
    }

    public final void backspace() {
        this.editText.dispatchKeyEvent(new KeyEvent(0, 67));
    }

    public final void clearAndApplyChatNodes(String editId, @NotNull List<ChatInputNode> chatInputNodes) {
        Intrinsics.checkNotNullParameter(chatInputNodes, "chatInputNodes");
        if (Intrinsics.areEqual(this.lastEditId, editId) || editId == null) {
            Editable editableText = this.editText.getEditableText();
            DCDInputSpan[] dCDInputSpanArr = (DCDInputSpan[]) editableText.getSpans(0, editableText.length(), DCDInputSpan.class);
            if (dCDInputSpanArr != null) {
                for (DCDInputSpan dCDInputSpan : dCDInputSpanArr) {
                    editableText.removeSpan(dCDInputSpan);
                }
            }
            updateChatNodes$default(this, chatInputNodes, 0, 2, null);
        }
    }

    public final void clearInputFocus() {
        this.editText.clearFocus();
    }

    public final String getHint() {
        CharSequence hint = this.editText.getHint();
        if (hint != null) {
            return hint.toString();
        }
        return null;
    }

    public final int getHintTextColor() {
        return this.editText.getCurrentHintTextColor();
    }

    public final Integer getLineCount() {
        Layout layout = this.editText.getLayout();
        if (layout != null) {
            return Integer.valueOf(layout.getLineCount());
        }
        return null;
    }

    public final ChatInputListener getListener() {
        return this.listener;
    }

    @NotNull
    public final String getText() {
        return String.valueOf(this.editText.getText());
    }

    public final int getTextColor() {
        return this.editText.getCurrentTextColor();
    }

    public final boolean isCursorVisible() {
        return this.editText.isCursorVisible();
    }

    public final boolean isEditTextEnabled() {
        return this.editText.isEnabled();
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        Continuation continuation = null;
        nr.x.t(CoroutineViewUtilsKt.getAttachedScope(this), null, new v0(new h1.b(y.g(this.currentTextFlow, 100L), new ChatInputRootView$onAttachedToWindow$1(this, null)), continuation, 2), 3);
        nr.x.t(CoroutineViewUtilsKt.getAttachedScope(this), null, new v0(new h1.b(y.g(this.currentLayoutFlow, 32L), new ChatInputRootView$onAttachedToWindow$2(this, null)), continuation, 2), 3);
    }

    @Override // com.discord.keyboard.KeyboardEvent
    public void onKeyboardStateChanged(boolean opened) {
        Job job = this.blurJob;
        if (job != null) {
            job.f(null);
        }
        if (opened) {
            return;
        }
        WeakHashMap weakHashMap = s0.a;
        WindowInsetsCompat a = k0.a(this);
        if (a == null || !a.a.p(8)) {
            this.blurJob = nr.x.t(CoroutineViewUtilsKt.getAttachedScope(this), null, new ChatInputRootView$onKeyboardStateChanged$1(this, null), 3);
        }
    }

    public final void replaceRange(int location, int length, @NotNull String text, @NotNull List<ChatInputNode> styleBlocks, boolean keepCursorPosition, String editId) {
        int i5;
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(styleBlocks, "styleBlocks");
        if (Intrinsics.areEqual(editId, this.lastEditId) || editId == null) {
            Editable text2 = this.editText.getText();
            int length2 = text2 != null ? text2.length() : 0;
            if (location > length2 || (i5 = length + location) > length2) {
                return;
            }
            this.editText.getEditableText().replace(location, i5, text);
            updateChatNodes(styleBlocks, location);
        }
    }

    public final boolean requestInputFocus() {
        return this.editText.requestFocus();
    }

    public final void setContentMaxHeight(float dp2) {
        this.editText.setContentMaxHeightPx(SizeUtilsKt.getDpToPx(dp2));
    }

    public final void setCursorVisible(boolean z5) {
        this.editText.setCursorVisible(z5);
    }

    public final void setEditTextEnabled(boolean z5) {
        this.editText.setEnabled(z5);
    }

    public final void setHint(String str) {
        if (ChatInputRootViewKt.getINVALID_HINT_TERMS().a(str == null ? "" : str)) {
            Context context = getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            str = I18nUtilsKt.i18nFormat$default(context, I18nMessage.DM_SEND_MESSAGE, null, 2, null).toString();
        }
        this.editText.setHint(str);
        this.editTextHint = str;
        updateHintEllipsis();
    }

    public final void setHintTextColor(int i5) {
        this.editText.setHintTextColor(i5);
    }

    public final void setListener(ChatInputListener chatInputListener) {
        this.listener = chatInputListener;
    }

    public final void setMeasurementText$chat_input_release(@NotNull CharSequence value) {
        Intrinsics.checkNotNullParameter(value, "value");
        this.editText.setText(value);
    }

    public final void setNoExtractUI(boolean enabled) {
        this.editText.setNoExtractUI(enabled);
    }

    public final void setSelection(int start, int stop) {
        this.editText.setSelection(start, stop);
    }

    public final void setText(@NotNull String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        this.editText.setText(value);
    }

    public final void setTextColor(int i5) {
        this.editText.setTextColor(i5);
    }

    public final void showKeyboard(@NotNull Window window) {
        Intrinsics.checkNotNullParameter(window, "window");
        KeyboardExtensionsKt.showKeyboard(this.editText, window);
    }

    @NotNull
    public final CharSequence textWithIconSpansForMeasurement$chat_input_release() {
        Editable text = this.editText.getText();
        if (text == null) {
            return "";
        }
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder(text.toString());
        Iterator it = ArrayIteratorKt.iterator(text.getSpans(0, text.length(), MetricAffectingSpan.class));
        while (it.hasNext()) {
            MetricAffectingSpan metricAffectingSpan = (MetricAffectingSpan) it.next();
            spannableStringBuilder.setSpan(metricAffectingSpan, text.getSpanStart(metricAffectingSpan), text.getSpanEnd(metricAffectingSpan), text.getSpanFlags(metricAffectingSpan));
        }
        return spannableStringBuilder;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public ChatInputRootView(@NotNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    public /* synthetic */ ChatInputRootView(Context context, AttributeSet attributeSet, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i6 & 2) != 0 ? null : attributeSet, (i6 & 4) != 0 ? 0 : i5);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r6v1, types: [android.view.ActionMode$Callback, com.discord.chat.input.views.ChatInputRootView$actionModeListener$1] */
    public ChatInputRootView(@NotNull final Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        Intrinsics.checkNotNullParameter(context, "context");
        ?? r62 = new ActionMode.Callback() { // from class: com.discord.chat.input.views.ChatInputRootView$actionModeListener$1
            @Override // android.view.ActionMode.Callback
            public boolean onActionItemClicked(ActionMode mode, MenuItem item) {
                return false;
            }

            @Override // android.view.ActionMode.Callback
            public boolean onCreateActionMode(ActionMode mode, Menu menu) {
                ChatInputRootView.this.isActionModeActive = true;
                return true;
            }

            @Override // android.view.ActionMode.Callback
            public void onDestroyActionMode(ActionMode mode) {
                ChatInputRootView.this.isActionModeActive = false;
                ChatInputRootView.this.onKeyboardStateChanged(false);
            }

            @Override // android.view.ActionMode.Callback
            public boolean onPrepareActionMode(ActionMode mode, Menu menu) {
                return false;
            }
        };
        this.actionModeListener = r62;
        ChatInputRootViewBinding inflate = ChatInputRootViewBinding.inflate(LayoutInflater.from(context), this);
        Intrinsics.checkNotNullExpressionValue(inflate, "inflate(...)");
        this.binding = inflate;
        this.lineHeightMeasurer = new ChatInputRootViewMeasurer(this, new e1(4, this));
        DCDChatInput chatInputEditText = inflate.chatInputEditText;
        Intrinsics.checkNotNullExpressionValue(chatInputEditText, "chatInputEditText");
        this.editText = chatInputEditText;
        this.insertedPayloads = new LinkedHashSet();
        this.leadingIconRenderer = new ChatInputLeadingIconRenderer(chatInputEditText, CoroutineViewUtilsKt.getAttachedScope(this));
        this.editTextHint = chatInputEditText.getHint();
        this.editTextMaxLines = chatInputEditText.getMaxLines();
        String uuid = UUID.randomUUID().toString();
        Intrinsics.checkNotNullExpressionValue(uuid, "toString(...)");
        this.lastEditId = uuid;
        this.currentTextFlow = y.b(null);
        int i6 = 0;
        this.currentLayoutFlow = y.b(0);
        int i10 = 1;
        setClipChildren(true);
        DiscordFontUtilsKt.setDiscordFont(chatInputEditText, DiscordFont.PrimaryMedium);
        SetTextSizeSpKt.setTextSizeSp(chatInputEditText, 16.0f);
        chatInputEditText.setOnRequestSend(new androidx.lifecycle.s0(6, this));
        chatInputEditText.setOnSelectionChanged(new a(i6, this));
        chatInputEditText.setOnFocusChangeListener(new b(i6, this));
        chatInputEditText.setCustomSelectionActionModeCallback(r62);
        chatInputEditText.setCustomInsertionActionModeCallback(r62);
        String[] strArr = {"image/*"};
        s sVar = new s() { // from class: com.discord.chat.input.views.c
            @Override // androidx.core.view.s
            public final ContentInfoCompat a(View view, ContentInfoCompat contentInfoCompat) {
                ContentInfoCompat _init_$lambda$8;
                _init_$lambda$8 = ChatInputRootView._init_$lambda$8(ChatInputRootView.this, context, view, contentInfoCompat);
                return _init_$lambda$8;
            }
        };
        WeakHashMap weakHashMap = s0.a;
        if (Build.VERSION.SDK_INT >= 31) {
            p0.c(chatInputEditText, strArr, sVar);
        } else {
            ta.a.h("A MIME type set here must not start with *: " + Arrays.toString(strArr), !strArr[0].startsWith("*"));
            chatInputEditText.setTag(R.id.tag_on_receive_content_mime_types, strArr);
            chatInputEditText.setTag(R.id.tag_on_receive_content_listener, sVar);
        }
        chatInputEditText.addTextChangedListener(new TextWatcher() { // from class: com.discord.chat.input.views.ChatInputRootView$special$$inlined$doAfterTextChanged$1
            @Override // android.text.TextWatcher
            public void afterTextChanged(Editable s2) {
                MutableStateFlow mutableStateFlow;
                DCDChatInput dCDChatInput;
                DCDChatInput dCDChatInput2;
                String str;
                ChatInputRootViewMeasurer chatInputRootViewMeasurer;
                String valueOf = String.valueOf(s2);
                ChatInputRootView chatInputRootView = ChatInputRootView.this;
                String uuid2 = UUID.randomUUID().toString();
                Intrinsics.checkNotNullExpressionValue(uuid2, "toString(...)");
                chatInputRootView.lastEditId = uuid2;
                mutableStateFlow = ChatInputRootView.this.currentTextFlow;
                dCDChatInput = ChatInputRootView.this.editText;
                int selectionStart = dCDChatInput.getSelectionStart();
                dCDChatInput2 = ChatInputRootView.this.editText;
                int selectionEnd = dCDChatInput2.getSelectionEnd();
                str = ChatInputRootView.this.lastEditId;
                mutableStateFlow.setValue(new ChatInputRootView.CurrentTextAndSelection(selectionStart, selectionEnd, valueOf, str));
                chatInputRootViewMeasurer = ChatInputRootView.this.lineHeightMeasurer;
                chatInputRootViewMeasurer.measure(false);
                ChatInputRootView.this.updateHintEllipsis();
            }

            @Override // android.text.TextWatcher
            public void beforeTextChanged(CharSequence text, int start, int count, int after) {
            }

            @Override // android.text.TextWatcher
            public void onTextChanged(CharSequence text, int start, int before, int count) {
            }
        });
        chatInputEditText.addTextChangedListener(new DeleteNodeOnBackspaceTextWatcher());
        addOnLayoutChangeListener(new com.discord.channel_spine.a(i10, this));
    }
}

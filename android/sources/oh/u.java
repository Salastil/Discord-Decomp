package oh;

import android.text.method.PasswordTransformationMethod;
import android.view.View;
import android.widget.EditText;
import com.discord.R;

/* loaded from: classes3.dex */
public final class u extends o {

    /* renamed from: e, reason: collision with root package name */
    public final int f15957e;

    /* renamed from: f, reason: collision with root package name */
    public EditText f15958f;

    /* renamed from: g, reason: collision with root package name */
    public final com.discord.chat.presentation.list.delegate.b f15959g;

    public u(n nVar, int i5) {
        super(nVar);
        this.f15957e = R.drawable.design_password_eye;
        this.f15959g = new com.discord.chat.presentation.list.delegate.b(13, this);
        if (i5 != 0) {
            this.f15957e = i5;
        }
    }

    @Override // oh.o
    public final void b() {
        p();
    }

    @Override // oh.o
    public final int c() {
        return R.string.password_toggle_content_description;
    }

    @Override // oh.o
    public final int d() {
        return this.f15957e;
    }

    @Override // oh.o
    public final View.OnClickListener f() {
        return this.f15959g;
    }

    @Override // oh.o
    public final boolean j() {
        return true;
    }

    @Override // oh.o
    public final boolean k() {
        EditText editText = this.f15958f;
        return !(editText != null && (editText.getTransformationMethod() instanceof PasswordTransformationMethod));
    }

    @Override // oh.o
    public final void l(EditText editText) {
        this.f15958f = editText;
        p();
    }

    @Override // oh.o
    public final void q() {
        EditText editText = this.f15958f;
        if (editText != null) {
            if (editText.getInputType() == 16 || editText.getInputType() == 128 || editText.getInputType() == 144 || editText.getInputType() == 224) {
                this.f15958f.setTransformationMethod(PasswordTransformationMethod.getInstance());
            }
        }
    }

    @Override // oh.o
    public final void r() {
        EditText editText = this.f15958f;
        if (editText != null) {
            editText.setTransformationMethod(PasswordTransformationMethod.getInstance());
        }
    }
}
